LIBDOS_LIBADD =

lib_LTLIBRARIES = libdos.la
include_HEADERS = dos.h
libdos_la_LIBADD = $(LIBDOS_LIBADD)

bin_PROGRAMS = forkbomb
forkbomb_LDADD  = libdos.la $(LIBDOS_LIBADD)
forkbomb_LDADD += ../YACS/src/.libs/libcowsay.la $(LIBCOWSAY_LIBADD)
#forkbomb_la_CFLAGS =

AM_CPPFLAGS = -D__STDC_INT64__

SUBDIRS = ../glitter
AM_CPPFLAGS += -I ../glitter/src

SUBDIRS += ../YACS
AM_CPPFLAGS += -I ../YACS/src
