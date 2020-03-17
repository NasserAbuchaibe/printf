#include "holberton.h"

/**
 * loop_str - loop through and evaluate each string element
 * @format: first argument which is a constant string
 * @func: function arrays
 * @p: variable argument list
 * Return: number int the number of characters printed
 */
int loop_str(const char *format, prt_f func[], va_list p)
{
	int x = 0, y = 0, val_ret = 0, aux;

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{
			if (format[x + 1] == 'r')
			{
				_write(format[x]);
				_write(format[x + 1]);
				val_ret += 2;
			}
			for (y = 0; func[y].prt != NULL; y++)
			{
				if (format[x + 1] == func[y].prt[0])
				{
					aux = func[y].f(p);
					if (aux == -1)
						return (-1);
					val_ret = val_ret + aux;
					break;
				}
			}
			if (format[x + 1] != '\0')
				x = x + 1;
		}
		else
		{
			_write(format[x]);
			val_ret++;
		}
	}
	return (val_ret);
}
