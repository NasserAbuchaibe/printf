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
 * @p: Variable argument list
 * Return: On success 1.
 * On error, -1 is returned.
 */

int f_char(va_list p)
{
	char ch = va_arg(p, int);

	return (_write(ch));
}
/**
 * f_string - Function that prints a string using function _write
 * @p: Variable argument list.
 * Return: On success 1.
 * On error, -1 is returned.
 */
int f_string(va_list p)
{
	char *s;
	int x;

	s = va_arg(p, char*);
	if (s == NULL)
	{
		return (-1);
	}
	for (x = 0 ; s != '\0' ; x++)
	{
		return (_write(s[x]));
	}
}

/**
 * f_percent - Function that prints a symbol of percent using function _write
 * @p: Variable argument list
 * Return: On success 1.
 * On error, -1 is returned.
 */
int f_percent(va_list p)
{
	int x;

	if (format[x + 1] == '%')
		return (_write("%"));
}

/**
 * f_backslash - Function that prints a backslash using function _write
 * @p: Variable argument list
 * Return: On success 1.
 * On error, -1 is returned.
 */
int f_backslash(va_list p)
{
	int x;

	if (format[x + 1] == 'b')
		return (_write('\b'));
	else if (format[x + 1] == 'f')
		return (_write('\f'));
	else if (format[x + 1] == 'n')
		return (_write('\n'));
	else if (format[x + 1] == 't')
		return (_write('\t'));
	else if (format[x + 1] == 'v')
	{
		return (_write('\v'));
	}
	else
	{
		return (_write(format[x + 1]));
	}
}
