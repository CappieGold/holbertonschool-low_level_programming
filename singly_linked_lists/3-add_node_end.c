#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - computes the lenght of a string.
 * @str: the string
 * Return: lenght of the string
*/

unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * add_node_end - Add new node at the end of a list
 * @head: Pointer to the head of the list
 * @str: String to be duplicated and assigned to the new node
 * Return: The address of the new element or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;

	return (new_node);

}
