AC_INIT([libdos], [0.0], [laurence.a.maddox@gmail.com])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AM_PROG_AR
LT_INIT([])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
 Makefile
 src/Makefile
 src/libdos.pc
 src/forkbomb.pc
])

PKG_PROG_PKG_CONFIG

AC_ARG_ENABLE([use-submodules],
    AS_HELP_STRING([--enable-use-submodules], [Enable use submodules]))
AM_CONDITIONAL([USE_SUBMODULES], [test x"$enable_use_submodules" = "xyes"])

AC_CONFIG_MACRO_DIR([m4])

AC_CHECK_HEADERS([stdbool.h stdio.h stdlib.h unistd.h])
#AC_CHECK_HEADERS([cowsay.h glitter.h])

#AC_CHECK_LIB([cowsay],[ezcowsay])

PKG_CHECK_MODULES([GLITTER],[glitter],,)
PKG_CHECK_MODULES([COWSAY],[libcowsay],,)

INNOVANON_WARNINGS([])

AC_OUTPUT

