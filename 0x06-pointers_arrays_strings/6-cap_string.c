#include "main.h"

/**
* cap_string - function that capitalizes all words of a strin
* @ch: pointer to input string
* Return: pointer to Capitalized string
*/
char *cap_string(char *ch)
{
	int	i;

	i = 0;
	while (ch[i])
	{
		ch[i] = upper(ch[i]);
		i++;
	}
	return (ch);
}
