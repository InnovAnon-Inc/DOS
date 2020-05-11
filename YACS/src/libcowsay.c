#if HAVE_CONFIG_H
#include <config.h>
#endif

#define _POSIX_C_SOURCE 200112L

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <cowsay.h>

/*extern int snprintf(char *str, size_t size, const char *format, ...) ;*/

__attribute__ ((leaf, nonnull (1), nothrow))
void build_dashLength (
	char dl[],
	size_t lnlen) {
	memset (dl, (int) '-', lnlen);
	dl[lnlen] = '\0';
}

__attribute__ ((nonnull (1, 2, 3), nothrow))
void init_cowsay (
	cowsay_t *restrict cowsay,
	char const cs[],
	char dl[],
	size_t lnlen) {
	cowsay->cowsay = cs;
	cowsay->lnlen = strlen (cs);
	cowsay->dashLength = dl;
	build_dashLength (cowsay->dashLength, cowsay->lnlen);
}

__attribute__ ((nonnull (1, 2), nothrow, warn_unused_result))
int alloc_cowsay (
	cowsay_t *restrict cowsay,
	char const cs[]) {
	size_t lnlen = strlen (cs);
	char *restrict dl = malloc (lnlen + 1);
	error_check (dl == NULL) return -1;
	init_cowsay (cowsay, cs, dl, lnlen);
	return 0;
}

__attribute__ ((leaf, nonnull (1), nothrow))
void free_cowsay (cowsay_t const *restrict cowsay) {
	free (cowsay->dashLength);
}

__attribute__ ((leaf, malloc, nonnull (1, 2), nothrow, warn_unused_result))
char *build_cow (
	cowsay_t const *restrict cowsay,
	char const template[]) {
	size_t tsz = strlen (template) - 2 * 3 ;
	size_t outsz = tsz + cowsay->lnlen * 3;
	char *restrict out = malloc (outsz + 1);
	TODO (if (outsz > SSIZE_MAX) return NULL;)
	error_check (out == NULL) return NULL;
	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wformat-nonliteral"
	error_check ((ssize_t) outsz != snprintf (out, outsz, template,
		cowsay->dashLength, cowsay->cowsay, cowsay->dashLength)) {
	#pragma GCC diagnostic pop
		free (out);
		return NULL;
	}
	return out;
}

__attribute__ ((nonnull (1, 2, 3), warn_unused_result))
int ezcowsay (
	char const str[],
	char const template[],
	ezcowsaycb_t cb) {
	cowsay_t cs;
	char *restrict out;
	error_check (alloc_cowsay (&cs, str) != 0)
		return -1;
	out = build_cow (&cs, template);
	error_check (out == NULL) {
		free_cowsay (&cs);
		return -2;
	}
	error_check (cb (out) != 0) {
		free (out);
		free_cowsay (&cs);
		return -3;
	}
	free (out);
	free_cowsay (&cs);
	return 0;
}

/* https://pastebin.com/f2e55ab5 */