#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - entry point
 * @head: content a list
 * @index: position to search
 * Return: give back the content of the position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *ptr = head;

	while (num != index && ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}

	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
