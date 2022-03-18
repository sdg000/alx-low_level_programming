#include "main.h"

/**
 * print_number - prints an integer
 * @n: tracked var
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		x = -x;
		_putchar(45);
	}
	if ((x / 10) > 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + 48);
}
