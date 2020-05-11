/* D(ata) S(tructure) Int(erfaces) */
/* pronounced "decent," "descent," or "dissent" */

#ifndef _DSINT_H_
#define _DSINT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <glitter.h>

typedef __attribute__ ((nonnull (1), warn_unused_result))
bool (*isfull_t) (void const *restrict arg) ;

typedef __attribute__ ((nonnull (1), warn_unused_result))
bool (*isempty_t) (void const *restrict arg) ;

typedef __attribute__ ((nonnull (1), warn_unused_result))
size_t (*remaining_space_t) (void const *restrict arg) ;

typedef __attribute__ ((nonnull (1), warn_unused_result))
size_t (*used_space_t) (void const *restrict arg) ;

typedef __attribute__ ((nonnull (1, 2)))
void (*add_t) (void *restrict ds, void const *restrict e) ;

typedef __attribute__ ((nonnull (1, 2)))
void (*remove_t) (void *restrict ds, void *restrict e) ;

typedef __attribute__ ((nonnull (1, 2)))
void (*adds_t) (void *restrict ds, void const *restrict e, size_t n) ;

typedef __attribute__ ((nonnull (1, 2)))
void (*removes_t) (void *restrict ds, void *restrict e, size_t n) ;

typedef __attribute__ ((warn_unused_result))
void *(*alloc_t) (void const *restrict) ;

typedef __attribute__ ((nonnull (1)))
void (*free_t) (void *restrict) ;

typedef __attribute__ ((nonnull (1)))
void (*frees_t) (void *restrict, size_t n) ;

#ifdef __cplusplus
}
#endif

#endif /* _DSINT_H_ */