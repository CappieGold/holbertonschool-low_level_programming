#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints elements of a list_t list
 * @h: A pointer to the first node
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t node_index = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		node_index++;
		h = h->next;
	}

	return (node_index);
}
