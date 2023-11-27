#include "lists.h"
#include <stdio.h>

/**
 * list_len - count number of elements of a list_t list
 * @h: Pointer to the first node
 * Return: number of elements in a linked list_t list.
*/

size_t list_len(const list_t *h)
{
	unsigned int index = 0;

	while (h != 0)
	{
		index++;
		h = h->next;
	}

	return (index);
}
