#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdarg.h>

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
 * Return:
 */

int f_char(va_list p)
{

}
/**
 * f_string - Function that prints a string using function _write
 * @p: Variable argument list.
 * Return:
 */
int f_string(va_list p)
{

}

/**
 * f_percent - Function that prints a symbol of percent using function _write
 * @p: Variable argument list
 * Return:
 */
int f_percent(va_list p)
{

}
