#include "main.h"

/**
* *_strncat - function that concatenates two strings
* using at most n bytes from src
* @dest: character pointer variable
* @src: character pointer variable
* @n: integer variable
* Return: pointer to dest variable
*
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
