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
 * add_node - add a new node at the beginning of a list
 * @head: A double pointer to the head of the list
 * @str: the strind to be add to the list
 * Return: the adress of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
