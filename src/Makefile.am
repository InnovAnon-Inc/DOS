AM_CPPFLAGS = -D__STDC_INT64__

if USE_SUBMODULES
SUBDIRS = ../glitter
AM_CPPFLAGS += -I $(top_srcdir)/glitter/src

SUBDIRS += ../YACS
AM_CPPFLAGS += -I $(top_srcdir)/YACS/src
endif

include Makefile-LIBADD.inc

lib_LTLIBRARIES = libdos.la
include_HEADERS = dos.h
libdos_la_LIBADD = $(LIBDOS_LIBADD)

bin_PROGRAMS = forkbomb
forkbomb_LDADD = $(FORKBOMB_LIBADD)
