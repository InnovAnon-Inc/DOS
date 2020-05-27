# DOS
lib Denial Of Service
==========
Stress-testing kit

Use it to verify (i.e., test whether) that your "friends" have "secured" their
multi-user system.

----------
It is your Sys Admin's responsibility to properly anticipate "use-cases" and to
fortify his server against them:

https://www.cyberciti.biz/tips/linux-limiting-user-process.html

https://lzone.de/blog/Apply-changes-to-limits.conf-immediately

It is Mgmt's responsibility to invest a sufficiently in a competent IT
department.

==========
Example:

`make -j1 install` needs these to be higher than a Georgia pine
----------
- sudo tee -a /etc/security/limits.conf << "EOF"
- @dos hard nproc 30
- @dos soft nproc 20
- EOF

ensure those ^^^ policies will be enforced when we sudo
----------
- sudo tee -a /etc/pam.d/sudo << "EOF"
- session required pam_limits.so
- EOF


LFS-style--add user/group which will now fail to DOS you
----------
- sudo groupadd dos
- sudo useradd dos -s /bin/bash -g dos -m -k /dev/null dos
-

configure that user's profile to easily run our custom softwarez
----------
- sudo -u dos -i tee -a .profile << "EOF"
- export PATH="$HOME/bin:$PATH"
- export LD_LIBRARY_PATH="$HOME/lib:$LD_LIBRARY_PATH"
- export LIBRARY_PATH="$HOME/lib:$LIBRARY_PATH"
- export CPATH="$HOME/include:$CPATH"
- EOF

(as the CIS-user)
----------
- git pull origin master
- autoreconf -i

or whatever CFLAGS your system allows for `build-world' 3:)
just install it to the right user's directory
it's prolly BPs to keep this out of your standard path... just FYI
----------
- CFLAGS='-Ofast -ffast-math -funsafe-loop-optimizations -g0 -fomit-frame-pointer -pipe'
- ./configure --prefix=/home/dos
- make

install to the right user's path
----------
- sudo -u dos make -j1 install

run it as the user who should*** fail to DOS you
----------
- sudo -u dos -i forkbomb

*** "'should' is a moral statement"

----------
[![CircleCI](https://img.shields.io/circleci/build/github/InnovAnon-Inc/DOS?color=%23FF1100&logo=InnovAnon%2C%20Inc.&logoColor=%23FF1133&style=plastic)](https://circleci.com/gh/InnovAnon-Inc/DOS)

[![Latest Release](https://img.shields.io/github/commits-since/InnovAnon-Inc/DOS/latest?color=%23FF1100&include_prereleases&logo=InnovAnon%2C%20Inc.&logoColor=%23FF1133&style=plastic)](https://github.com/InnovAnon-Inc/DOS/releases/latest)

[![Repo Size](https://img.shields.io/github/repo-size/InnovAnon-Inc/DOS?color=%23FF1100&logo=InnovAnon%2C%20Inc.&logoColor=%23FF1133&style=plastic)](https://github.com/InnovAnon-Inc/DOS)

![Dependencies](https://img.shields.io/librariesio/github/InnovAnon-Inc/DOS?color=%23FF1100&style=plastic)

[![License Summary](https://img.shields.io/github/license/InnovAnon-Inc/DOS?color=%23FF1100&label=Free%20Code%20for%20a%20Free%20World%21&logo=InnovAnon%2C%20Inc.&logoColor=%23FF1133&style=plastic)](https://tldrlegal.com/license/unlicense#summary)

![Corporate Logo](https://i.imgur.com/UD8y4Is.gif)

[![CodeFactor](https://www.codefactor.io/repository/github/InnovAnon-Inc/DOS/badge)](https://www.codefactor.io/repository/github/InnovAnon-Inc/DOS)

[![LoC](https://tokei.rs/b1/github/InnovAnon-Inc/DOS?category=code)](https://github.com/InnovAnon-Inc/DOS)

