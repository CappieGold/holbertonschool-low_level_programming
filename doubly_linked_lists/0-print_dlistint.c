#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints elements of a dlistint_t list.
 * @h: Pointer ti the first node.
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_index = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		node_index++;
		h = h->next;
	}
	return (node_index);
}
