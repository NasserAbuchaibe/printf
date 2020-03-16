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
	int x = 0, y = 0, val_ret;

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] != '%' && format[x] != "\\")
			return (_write(format[x]));
		else if (format[x] == '%' || format[x] == "\\")
		{
			for (y = 0; func[y].prt != NULL; y++)
			{
				if (format[x + 1] == func[y].prt)
				{
					val_ret = func[y].f(p);
					if (val_ret == -1)
						return (-1);
					return (val_ret);
				}
			}
			if (format[x + 2] != '\0')
				x = x + 2;
		}
	}
}
