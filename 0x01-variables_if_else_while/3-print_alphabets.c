#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphas;
	char ALPHAS;

	for (alphas = 'a'; alphas <= 'z'; alphas++)
	{
	putchar(alphas);
	}
	for (ALPHAS = 'A'; ALPHAS <= 'Z'; ALPHAS++)
	{
	putchar(ALPHAS);
	}
	putchar('\n');
	return (0);
}
