include $(top_srcdir)/YACS/src/Makefile-LIBADD.inc

LIBDOS_LIBADD =

FORKBOMB_LIBADD = libdos.la $(LIBDOS_LIBADD)

if USE_MODULES
FORKBOMB_LDADD += ../YACS/src/.libs/libcowsay.la $(LIBCOWSAY_LIBADD)
else
FORKBOMB_LDADD += -lcowsay $(LIBCOWSAY_LIBADD)
fi
