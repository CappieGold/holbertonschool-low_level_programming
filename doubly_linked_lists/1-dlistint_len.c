#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Function that returns the number of elements in a linked
 * dlistint_t list.
 * @h: Pointer to the first node
 * Return: number of elements in a linked dlistint_t list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int index = 0;

	while (h != 0)
	{
		index++;
		h = h->next;
	}

	return (index);
}
