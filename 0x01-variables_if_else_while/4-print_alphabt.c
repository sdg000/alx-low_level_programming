#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphas;

	for (alphas = 'a'; alphas <= 'z'; alphas++)
	{
	if (alphas != 'e' && alphas != 'q')
	{
	putchar(alphas);
	}
	}
	putchar('\n');
	return (0);
}
