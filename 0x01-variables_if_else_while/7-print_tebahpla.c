#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphas;

	for (alphas = 'z'; alphas >= 'a'; alphas--)
	{
	putchar(alphas);
	}
	putchar('\n');
	return (0);
}
