#include $(top_srcdir)/YACS/src/Makefile-LIBADD.inc

LIBDOS_LIBADD =

FORKBOMB_LIBADD = libdos.la $(LIBDOS_LIBADD)

#if USE_SUBMODULES
#FORKBOMB_LIBADD += ../YACS/src/.libs/libcowsay.la $(LIBCOWSAY_LIBADD)
#else
FORKBOMB_LIBADD += -lcowsay $(LIBCOWSAY_LIBADD)
#endif
