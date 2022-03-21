#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int length;

	for (length = 0; src[length] != '\0'; length++)
	{

	}
	
	for (i = 0; i <= length; i++);
	{
		dest[i] = src[i];
	}
	return (dest);
}
