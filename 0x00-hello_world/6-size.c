#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int i;
	long int i2;
	long long int i3;
	float f;

	printf("the size of a char is: %lu. \n", (unsigned long)sizeof(a));
	printf("the size of an int is: %lu. \n", (unsigned long)sizeof(i));
	printf("the size of a long int is: %lu. \n", (unsigned long)sizeof(i2));
	printf("the size of a long long int is: %lu. \n", (unsigned long)sizeof(i3);
	printf("the size of a float is: %lu. \n", (unsigned long)sizeof(f));
	return (0);
}
