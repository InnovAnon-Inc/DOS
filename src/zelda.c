#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>

#include <cowsay.h>

int main (int argc, char *argv[]){
	if (ezcowsay ("It's dangerous to go alone, take this!",
		"--%s--\n"
		"< %s >\n"
		"--%s--\n"
		"\n"
		"          o-)-(:::::::::::::::>﻿\n",
		puts) == EOF)
		return EXIT_FAILURE;
	return EXIT_SUCCESS;
}
