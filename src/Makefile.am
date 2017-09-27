lib_LTLIBRARIES = libdos.la
libdos_la_SOURCES = dos.c
include_HEADERS = dos.h
#libdos_la_CFLAGS =

bin_PROGRAMS = forkbomb
forkbomb_SOURCES = forkbomb.c
forkbomb_LDADD = libdos.la -lcowsay
#forkbomb_la_CFLAGS =

AM_CPPFLAGS += -D__STDC_INT64__
