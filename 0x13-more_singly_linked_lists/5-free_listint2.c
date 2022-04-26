#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - entry point
 * @head:	list to free
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *tmp;

	if (head == NULL)
		return;
	ptr = *head;
	while (ptr != NULL)
	{
		tmp =  ptr;
		ptr = ptr->next;
		free(tmp);
	}
	*head = NULL;
}
