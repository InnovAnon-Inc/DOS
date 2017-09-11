#! /bin/bash
set -exo nounset

if [ $# -ne 0 ] ; then
	if [ -f Makefile ] ; then
		make distclean
	fi
fi

autoreconf --install

if [ $# -eq 0 ] ; then exit 0
else
	test "x$1" == xmake
	./configure --prefix=$HOME
	make
	make install
fi
