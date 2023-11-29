#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - find the node at the index we want
 * @head: Pointer to the first node
 * @index: index of node to recover (begin at 0)
 * Return: Pointer to the node at index given
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_index = 0;
	dlistint_t *node = head;

	while (node != NULL && node_index < index)
	{
		node = node->next;
		node_index++;
	}

	if (node_index == index)
	{
		return (node);
	}
	else
		return (NULL);
}
