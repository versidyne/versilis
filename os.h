// name: os.h
// version: 1.0
// description: gathers operating system information

// make sure definitions only occurred once
#ifndef OS_H
#define OS_H

    #if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) || defined(__WINDOWS__) || defined(__CYGWIN__) || defined(__MINGW32__) || defined(__BORLANDC__) || defined(__TOS_WIN__)
        #define OS_WIN
        #if defined(WIN32) || defined(__WIN32__) || defined(_WIN32)
            #define OS_WIN_32
        #elif defined(WIN64) || defined(_WIN64)
            #define OS_WIN_64
        #endif
    #elif defined(unix) || defined(__unix__) || defined(__unix) || defined(__linux__) || defined(__APPLE__)
        #define OS_UNIX
        #if defined __linux__
            #define OS_LINUX
        #elif defined __APPLE__
            #define OS_APPLE
            #if defined TARGET_OS_IPHONE
                #define OS_IPHONE
            #elif defined TARGET_OS_MAC
                #define OS_MAC
            #endif
        #endif
    #elif defined(_POSIX_VERSION)
        #define OS_POSIX
    #elif defined(__ANDROID__)
        #define OS_ANDROID
    #else
        #define OS_NULL
    #endif

    /*
    #if defined(OS_UNIX) && defined(__linux__)
        #define OS_LINUX
    #elif defined(OS_UNIX) && defined(__APPLE__)
        #define OS_APPLE
    #endif

    #if defined(OS_APPLE) && defined(TARGET_OS_IPHONE)
        #define OS_IPHONE
    #elif defined(OS_APPLE) && defined(TARGET_OS_MAC)
        #define OS_MAC
    #endif
    */

#endif
