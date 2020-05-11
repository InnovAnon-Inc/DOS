#ifndef _GLITTER_H_
#define _GLITTER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <limits.h>
#include <stdbool.h>

#define error_check(C)    if    (__builtin_expect ((long) (C), (long) false))
#define while_echeck(C,E) while (__builtin_expect ((long) (C), (long) false) && errno == (E))
#define while_check(C)    while (__builtin_expect ((long) (C), (long) false))

#define if_expect(C)      if    (__builtin_expect ((long) (C), (long) true))
#define while_expect(C)   while (__builtin_expect ((long) (C), (long) true))

/*#ifdef __cplusplus*/
#define restrict __restrict__
#define inline   __inline__
/*#endif*/

/* https://gcc.gnu.org/onlinedocs/gcc/Diagnostic-Pragmas.html */
#define DO_PRAGMA(x) _Pragma (#x)
/*#define TODO(...) DO_PRAGMA(message ("TODO - " #__VA_ARGS__))*/
#define TODO(x) DO_PRAGMA(message ("TODO - " #x))
#define CITATION(x) DO_PRAGMA(message ("Citation - " #x))
#define NOTE(x) DO_PRAGMA(message ("N.b., - " #x))

/*
#define swallow(E,D) do { \
	DO_PRAGMA (diagnostic ("push")) \
	DO_PRAGMA (diagnostic ("ignored" #D)) \
	(void) (E); \
	DO_PRAGMA (diagnostic ("pop")) \
} while (false) ;
*/
/*
#define swallow(E,D) do { \
	_Pragma ("GCC diagnostic push") \
	DO_PRAGMA ("GCC diagnostic ignored" #D) \
	(void) (E); \
	_Pragma ("GCC diagnostic pop") \
} while (false) ;
*/

typedef int fd_t;
typedef int err_t;

typedef __attribute__ ((warn_unused_result))
int (*stdcb_t) (void *) ;

TODO (hygienic min/max macros)

#ifndef min
#define min(A, B) ((A) < (B) ? (A) : (B))
#endif

#ifndef max
#define max(A, B) ((A) > (B) ? (A) : (B))
#endif

#ifndef range
#define range(MIN, MAX) ((MAX) - (MIN) + 1)
#endif

TODO (hygienic ARRSZ macro)
#define ARRSZ(A) (sizeof ((A)) / sizeof ((A)[0]))
#define ARRSZN(ESZ,N) ((ESZ) * (N))

#ifndef NBIT
#define NBIT(N) (sizeof ((N)) * CHAR_BIT)
#endif

/* https://stackoverflow.com/questions/27393269/msb-1-bit-most-left-index-in-c */
#ifndef fls0
#define fls0(x, T) (NBIT (T) - __builtin_clz ((T) (x)))
#endif
#ifndef fls
#define fls(x)   (fls0 ((x), unsigned int))
#endif
#ifndef flsl
#define flsl(x)  (fls0 ((x), unsigned long))
#endif
#ifndef flsll
#define flsll(x) (fls0 ((x), unsigned long long))
#endif

#ifdef __cplusplus
}
#endif

#endif /* _GLITTER_H_ */