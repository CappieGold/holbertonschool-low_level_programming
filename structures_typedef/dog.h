#ifndef DOG_H
#define DOG_H

/*
 * my header file : dog.h
*/

/**
 * struct dog - define a new type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
