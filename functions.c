#include "holberton.h"


/**
 * f_char - Function that prints a char using function _write
 * @p: Variable list argument
 * Return: On success 1.
 * On error, -1 is returned.
 */
int f_char(va_list p)
{
	_write(va_arg(p, int));
	return (1);
}

/**
 * f_string - Function that prints a string using function _write
 * @p: Variable list argument
 * Return: On success 1.
 * On error, -1 is returned.
 */
int f_string(va_list p)
{
	char *s;
	int x;

	s = va_arg(p, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (x = 0 ; s[x] != '\0' ; x++)
	{
		_write(s[x]);
	}
	return (x);
}

/**
 * f_percent - Function that prints a symbol of percent using function _write
 * @p: Variable list argument
 * Return: On success 1.
 * On error, -1 is returned.
 */
int f_percent(__attribute__((unused))va_list p)
{
	_write('%');
	return (1);
}

/**
 * f_decimal - Function that prints a decimal number
 * @p: Variable list argument
 * Return: Number decimal
 * On error, -1 is returned.
 */
int f_decimal(va_list p)
{
	int x = 0, val_ret = 0;

	x = va_arg(p, int);
	val_ret = val_ret + _write_n(x);
	return (val_ret);
}

/**
 * f_integ - Function that prints a integer number
 * @p: Variable list argument
 * Return: integer number
 * On error, -1 is returned.
 */

int f_integ(va_list p)
{
	int x = 0;

	x = x + _write_n(va_arg(p, int));
	return (x);
}
