#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * insert_nodeint_at_index - entry point
 * @head: a list
 * @idx: position of new node
 * @n: new date
 * Return: new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr = *head, *save;
	unsigned int cpt = 0;

	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (ptr == NULL || idx == 0)
	{
		*head = new;
		return (*head);
	}

	while (cpt != idx - 1 && ptr->next != NULL)
	{
		ptr = ptr->next;
		cpt++;
	}

	if (ptr->next == NULL)
		ptr->next = new;
	else
	{
		save = ptr->next;
		ptr->next = new;
		new->next = save;
	}
	return (new);
}
