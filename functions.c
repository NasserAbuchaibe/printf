#include "holberton.h"

/**
 * _write - Write the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _write(char c)
{
	return (write(1, &c, 1));
}

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
		_write("(null)");
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
