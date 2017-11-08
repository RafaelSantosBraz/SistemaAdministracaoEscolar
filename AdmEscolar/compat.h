#ifndef COMPAT_H_INCLUDED
#define COMPAT_H_INCLUDED

#ifdef __WIN32
    #define FFLUSH(fd) fflush(fd)
#else
    #define FFLUSH(fd) __fpurge(fd)
#endif

#endif // COMPAT_H_INCLUDED
