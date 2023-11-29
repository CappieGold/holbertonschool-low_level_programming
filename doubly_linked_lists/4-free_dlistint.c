#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free the memory of the list
 * @head: Pointer to the first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
