#ifndef __CJSON_STDIO_H__
#define __CJSON_STDIO_H__

#if defined(__GNUC__)

#include <stdarg.h>

#else

typedef char *va_list;

#define _INTSIZEOF(n)   ((sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1))

#define va_start(ap,v)  (ap = (va_list)&v + _INTSIZEOF(v))
#define va_arg(ap,t)    (*(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)))
#define va_end(ap)      (ap = (va_list)0)

#endif

void std_sprintf(char *s, char *fmt, ...);

#endif
