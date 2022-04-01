#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, som = 0, a;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[i]);
		if (a >= 0)
			som = som + a;
	}
	printf("%d\n", som);
	return (0);
}
