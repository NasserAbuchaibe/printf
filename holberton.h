#ifndef HOLBERTON
#define HOLBERTON
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct prt - Structure
 * @prt: pointer
 * @f: function pointer
 *
 * Description: Declaration of structure prt.
 */

typedef struct prt
{
	char *prt;
	int (*f)(va_list);
} prt_f;

int _write_n(int n);
int _write(char c);
int _printf(const char *format, ...);
int loop_str(const char *format, prt_f func[], va_list p);
int f_char(va_list p);
int f_string(va_list p);
int f_percent(va_list p);
int f_backslash(va_list p);
int f_decimal(va_list p);
int f_integ(va_list p);

#endif
