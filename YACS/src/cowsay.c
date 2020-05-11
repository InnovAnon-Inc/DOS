#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>

#include <cowsay.h>

int main (int argc, char *argv[]){
	if (ezcowsay ("Hello, World!",
		"--%s--\n"
		"< %s >\n"
		"--%s--\n"
		"  |  ^__^\n"
		"   - (oo)|_______\n"
		"     (__)|       )/|/\n"
		"         ||----w |\n"
		"         ||     ||\n",
		puts) == EOF)
		return EXIT_FAILURE;
	return EXIT_SUCCESS;
}
