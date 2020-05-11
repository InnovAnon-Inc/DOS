#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>

#include <cowsay.h>

int main (int argc, char *argv[]){
	if (ezcowsay ("Durka Durka! Allah Akhbar! Durka Durka!",
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
		puts) == EOF)
		return EXIT_FAILURE;
	return EXIT_SUCCESS;
}
