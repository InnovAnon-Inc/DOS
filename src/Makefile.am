lib_LTLIBRARIES = libdos.la
libdos_la_SOURCES = dos.c
include_HEADERS = dos.h

libdos_la_CFLAGS = -Wextra -pedantic -ansi -Werror -Wdouble-promotion \
                   -Wformat=2 -Wswitch-default -Wswitch-enum -Wuninitialized \
                   -Wstrict-aliasing=1 -Wstrict-overflow=5 \
                   -Wsuggest-attribute=pure -Wsuggest-attribute=const \
                   -Wsuggest-attribute=noreturn -Wsuggest-attribute=format \
                   -Warray-bounds=2 -Wtrampolines -Wfloat-equal \
                   -Wtraditional-conversion -Wdeclaration-after-statement \
                   -Wundef -Wshadow -Wunsafe-loop-optimizations \
                   -Wbad-function-cast -Wcast-qual -Wcast-align \
                   -Wwrite-strings -Wconversion -Wjump-misses-init \
                   -Wlogical-op \
                   -Wno-aggressive-loop-optimizations -Wstrict-prototypes \
                   -Wmissing-prototypes -Wmissing-declarations -Wpacked \
                   -Wpadded -Wredundant-decls -Wnested-externs -Winline \
                   -Wvector-operation-performance -Wdisabled-optimization \
                   -Wstack-protector \
                   -Winit-self

bin_PROGRAMS = forkbomb
forkbomb_SOURCES = forkbomb.c
forkbomb_LDADD = libdos.la
forkbomb_LDFLAGS = -lcowsay
forkbomb_la_CFLAGS = -Wextra -pedantic -ansi -Werror -Wdouble-promotion \
                   -Wformat=2 -Wswitch-default -Wswitch-enum -Wuninitialized \
                   -Wstrict-aliasing=1 -Wstrict-overflow=5 \
                   -Wsuggest-attribute=pure -Wsuggest-attribute=const \
                   -Wsuggest-attribute=noreturn -Wsuggest-attribute=format \
                   -Warray-bounds=2 -Wtrampolines -Wfloat-equal \
                   -Wtraditional-conversion -Wdeclaration-after-statement \
                   -Wundef -Wshadow -Wunsafe-loop-optimizations \
                   -Wbad-function-cast -Wcast-qual -Wcast-align \
                   -Wwrite-strings -Wconversion -Wjump-misses-init \
                   -Wlogical-op \
                   -Wno-aggressive-loop-optimizations -Wstrict-prototypes \
                   -Wmissing-prototypes -Wmissing-declarations -Wpacked \
                   -Wpadded -Wredundant-decls -Wnested-externs -Winline \
                   -Wvector-operation-performance -Wdisabled-optimization \
                   -Wstack-protector \
                   -Winit-self
