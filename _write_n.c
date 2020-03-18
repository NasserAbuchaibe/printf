#include "holberton.h"
/**
 * _write_n - Write the number integer or decimal
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _write_n(int n)
{
	int x, count = 0, y = 0;

	if (n == INT_MIN)
		n += 1;
	if (n < 0)
	{
		x = -1 * n;
		_write('-');
		count++;
	}
	else
	{
		x = n;
	}
	if (x / 10 != 0)
	{
		y = (_write_n(x / 10));
	}
	_write(x % 10 + '0');
	count++;
	count += y;
	return (count);
}
