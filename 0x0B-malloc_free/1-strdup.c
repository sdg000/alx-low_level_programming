#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char  *_strdup(char *str)
{
	char *src;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	src = malloc((len + 1) * sizeof(char));
	if (src != NULL)
	{
		while (str[i])
		{
			src[i] = str[i];
			i++;
		}
		src[i] = '\0';
	}
	return (src);
}
