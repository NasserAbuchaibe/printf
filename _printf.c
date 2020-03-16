#include "holberton.h"

/**
 * _printf - produces output according to a format
 * @format: first variable function argument
 * return: Printed character numbers or 
 * a negative value if an error occurs
 */
int _printf(const char *format, ...)
{
	int print_f = 0;
	va_list p;
	
	prt_f func[] = {
		{"c", f_char},
		{"s", f_string},
		{"%", f_percent},
		{NULL, NULL}
		};
	if (format != NULL)
	{
		va_start(p, format);
		print_f = loop_str(format, func, p);
		va_end(p);
	}
	else
		return (-1);
	return (print_f);
}
