#include "holberton.h"

/**
 * _printf - printf formatted data.
 * @format: variable function argument
 * Return: printed character numbers or
 * -1 if an error occurs
 */
int _printf(const char *format, ...)
{
	prt_f func[] = {
		{"c", f_char},
		{"s", f_string},
		{"%", f_percent},
		{"d", f_decimal},
		{"i", f_integ},
		{NULL, NULL}
	};
	int print_f = 0;

	va_list p;

	if (format != NULL)
	{
		va_start(p, format);
		print_f = loop_str(format, func, p);
		va_end(p);
	}
	else
	{
		return (-1);
	}
	return (print_f);
}
