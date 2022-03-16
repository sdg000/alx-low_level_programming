#include "main.h"

/**
 *times_table - a function that prints the 9 times table, starting with 0
 *starting from 00:00 to 23:59.
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int rone, cone, d;

	for (rone = 0; rone <= 9; rone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cone = 1; cone <= 9; cone++)
		{
			d = (rone * cone);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
