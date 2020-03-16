#ifndef HOLBERTON
#define HOLBERTON
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _write(char c);
int _printf(const char *format, ...);
int loop_str(const char *format, prt_f func[], va_list p);
int f_char(va_list p);
int f_string(va_list p);
int f_percent(va_list p);
int f_backslash(va_list p);

typedef struct prt
{
	char *prt;
	int (*f)(va_list);
} prt_f;

#endif
