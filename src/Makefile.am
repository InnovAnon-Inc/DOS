AM_CPPFLAGS = -D__STDC_INT64__

lib_LTLIBRARIES =
bin_PROGRAMS    =

lib_LTLIBRARIES += libdos.la
include_HEADERS = dos.h
libdos_la_CPPFLAGS = $(GLITTER_CFLAGS)
libdos_la_LIBADD   = $(GLITTER_LIBS)

bin_PROGRAMS += forkbomb
forkbomb_CPPFLAGS =       $(COWSAY_CFLAGS) $(GLITTER_CFLAGS)
forkbomb_LDADD    = -ldos $(COWSAY_LIBS)   $(GLITTER_LIBS)
EXTRA_forkbomb_DEPENDENCIES = libdos.la

