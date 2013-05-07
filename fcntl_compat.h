#ifndef _FCNTL_COMPAT_H
#define _FCNTL_COMPAT_H

#if __POSIX_VISIBLE < 200112
#define POSIX_FADV_NORMAL       0       /* no special treatment */
#define POSIX_FADV_RANDOM       1       /* expect random page references */
#define POSIX_FADV_SEQUENTIAL   2       /* expect sequential page references */
#define POSIX_FADV_WILLNEED     3       /* will need these pages */
#define POSIX_FADV_DONTNEED     4       /* dont need these pages */
#define POSIX_FADV_NOREUSE      5       /* access data only once */
#endif

#endif
