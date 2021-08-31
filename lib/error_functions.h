//
// Created by qiaoyubo on 2021/8/31.
//

#ifndef CPPTEST_ERROR_FUNCTIONS_H
#define CPPTEST_ERROR_FUNCTIONS_H

void errorMsg(const char *format, ...)

#ifdef __GNUC__
#define NORETURN __attribute__ ((__noreturn__))
#else
#define NORETURN
#endif

void errExit(const char *format, ...) NORETURN;
void err_exit(const char *format, ...) NORETURN;
void errExitEN(int errNum, const char *format, ...) NORETURN;
void fatal(const char *format, ...) NORETURN;
void cmdLineErr(const char *format, ...) NORETURN;

#endif //CPPTEST_ERROR_FUNCTIONS_H
