#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - calculate lenght
 * @str: string of char
 * Return: lenght of string
*/

int _strlen(char *str)
{
	int lenght = 0;

	while (*str++)
	{
		lenght++;
	}

	return (lenght);
}

/**
 * *_strcpy - copie of src to dest
 * @src: the source i want copie
 * @dest: the destination of my copie
 * Return: pointer dest
*/

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}

/**
 * *new_dog - Write a function that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: the new dog (dogNew)
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogNew;

	if (!name || age < 0 || !owner)
		return (NULL);

	dogNew = malloc(sizeof(dog_t));

	if (!dogNew)
		return (NULL);

	dogNew->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (!dogNew->name)
	{
		free(dogNew);
		return (NULL);
	}

	dogNew->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (!dogNew->owner)
	{
		free(dogNew->name);
		free(dogNew);
		return (NULL);
	}

	dogNew->name = _strcpy(dogNew->name, name);
	dogNew->age = age;
	dogNew->owner = _strcpy(dogNew->owner, owner);

	return (dogNew);
}
