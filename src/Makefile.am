lib_LTLIBRARIES = libdos.la
libdos_la_SOURCES = dos.c
include_HEADERS = dos.h
#libdos_la_CFLAGS =

bin_PROGRAMS = forkbomb
forkbomb_SOURCES = forkbomb.c
forkbomb_LDADD = libdos.la
forkbomb_LDFLAGS = -lcowsay
#forkbomb_la_CFLAGS =
