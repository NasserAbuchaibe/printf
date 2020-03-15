#ifndef HOLBERTON
#define HOLBERTON
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct prt
{
	char *prt;
	int (*f)(va_list);
} prt_f;

int loop_str(const char *format, prt_f func[], va_list p);

#endif
