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

/**
 * dog_t - Define a new type dog_t as a new name for the type struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
