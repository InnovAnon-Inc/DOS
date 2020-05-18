# Install the pkg-config file.
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = src/libdos.pc src/forkbomb.pc

DISTCLEANFILES = $(pkgconfig_DATA)
EXTRA_DIST = src/libdos.pc.in src/forkbomb.pc.in

SUBDIRS = src
dist_doc_DATA = README.md
ACLOCAL_AMFLAGS = -I m4

