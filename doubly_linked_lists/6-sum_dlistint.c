#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - Calculates the sum of data (n) of a doubly linked list
 * @head: Pointer to the first node
 * Return: the sum of data list
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
