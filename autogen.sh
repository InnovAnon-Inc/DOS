#! /bin/bash
set -exo nounset

if [ $# -ne 0 ] ; then
	git pull origin master
	git submodule foreach git fetch
	git submodule foreach git checkout master
	git submodule foreach git merge origin/master
	if [ -f Makefile ] ; then
		make distclean
	fi
fi

autoreconf --install

if [ $# -eq 0 ] ; then exit 0
else
	test "x$1" == xmake
	DIR="$(readlink -f `pwd`)"
	rm -fr ../DOS-build
	mkdir ../DOS-build
	cd ../DOS-build
	#"$DIR/configure" "--prefix=$HOME"
	"$DIR/configure" --prefix=/home/dos
	make
	#make install
	sudo -u dos make -j1 install
fi
