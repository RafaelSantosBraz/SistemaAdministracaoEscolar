#ifndef COMPAT_H_INCLUDED
#define COMPAT_H_INCLUDED

#ifdef __WIN32
    #define FFLUSH(fd) fflush(fd)
#else
    #define FFLUSH(fd) fpurge(fd)
#endif

#endif // COMPAT_H_INCLUDED
