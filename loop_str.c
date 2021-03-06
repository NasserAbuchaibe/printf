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
	int x = 0, y = 0, val_ret = 0, auxcont;

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			_write(format[x]);
			val_ret++;
		}
		if (format[x] == '%')
		{
			for (y = 0; func[y].prt != NULL; y++)
			{
				if (format[x + 1] == func[y].prt[0])
				{
					auxcont = func[y].f(p);
					if (auxcont == -1)
						return (-1);
					val_ret += auxcont;
					break;
				}
			}
				if (format[x + 1] != ' ' && func[y].prt == NULL)
				{
					if (format[x + 1] != '\0')
					{
						_write(format[x]);
						_write(format[x + 1]);
						val_ret += 2;
					}
					else
						return (-1);
				}
				x += 1;
		}
	}
	return (val_ret);
}
