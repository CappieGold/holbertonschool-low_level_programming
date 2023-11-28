#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - free the list lits_t
 * @head: Pointer to the first node
*/

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		temp = head;
		free(head->str);
		head = head->next;
		free(temp);
	}
}
