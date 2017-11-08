#ifndef COMPAT_H_INCLUDED
#define COMPAT_H_INCLUDED

#define FFLUSH(fd)\
#ifdef __WIN32
    fflush(fd);
#elif
    fpurge(fd);
#endif

#endif // COMPAT_H_INCLUDED
