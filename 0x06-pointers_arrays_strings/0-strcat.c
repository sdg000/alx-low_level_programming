#include "main.h"

/**
* *_strcat - function that concatenates two strings
* @dest: character pointer variable
* @src: character pointer variable
* Return: pointer to the result sting dest
*/

char *_strcat(char *dest, char *src)
{
int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] && dest[i] != '\0')
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
