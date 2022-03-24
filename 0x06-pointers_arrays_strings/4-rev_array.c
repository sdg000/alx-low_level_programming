#include "main.h"

/**
* reverse_array - function that reverses the content of an array of integers
* @a: integer pointer variable to an array
* @n: integer variable showing number of elements in array
* Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i = 0, taille, k;
	int c;

	taille = n - 1;
	k = taille / 2;

	while (i <= k)
	{
		c = a[i];
		a[i] = a[taille];
		a[taille] = c;
		i++;
		taille--;
	}
}
