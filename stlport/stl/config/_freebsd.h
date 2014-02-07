#ifndef __stl_config__freebsd_h
#define __stl_config__freebsd_h

#define _STLP_PLATFORM "Free BSD"

// Mostly Unix-like.
#define _STLP_UNIX 1

// Have pthreads support.
#define _PTHREADS

// Enable thread support
#undef _NOTHREADS

// Use unix for streams
#define _STLP_USE_UNIX_IO 1

// No rtti support
#define _STLP_NO_RTTI 1

// C library is in the global namespace.
#define _STLP_VENDOR_GLOBAL_CSTD 1

#define _STLP_BIG_ENDIAN 1

// Do not use glibc, Android is missing some things.
#undef _STLP_USE_GLIBC

#define _STLP_NO_NATIVE_MBSTATE_T

// No exceptions.
#define _STLP_NO_UNCAUGHT_EXCEPT_SUPPORT 1
#define _STLP_NO_UNEXPECTED_EXCEPT_SUPPORT 1

// Android does have include_next but it doesn't work well in our build system.
#undef _STLP_HAS_INCLUDE_NEXT

#if !defined(__BUILDING_STLPORT)
// Turn off container extension which fails correct, standard-compliant code.
// Note: Container extension uses template member function to implement
// insert, find, ... member functions of the containers.
#define _STLP_NO_CONTAINERS_EXTENSION 1
#endif

#endif /* __stl_config__android_h */


