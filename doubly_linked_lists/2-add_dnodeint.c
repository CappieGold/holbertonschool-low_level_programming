#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node at the beginning of list
 * @head: Pointer to the first node
 * @n: value of node
 * Return: the new node or NULL if fail
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
