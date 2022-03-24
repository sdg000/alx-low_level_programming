#include "main.h"

/**
* _strcmp - function that compares two strings
* @s1: character pointer variable
* @s2: character pointer variable
* Return: positive, negative or zero integer
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (s1 == s2)
		return (0);
	else
		return ((int)*s1 - (int)*s2);
}
