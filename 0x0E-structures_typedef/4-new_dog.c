#include "dog.h"
#include<stddef.h>
#include<stdlib.h>

/**
 * new_dog - creates new dog
 *
 * @name: name of the dog
 * @age: float age of the dog
 * @owner: string name of the dog
 * Return: address to the dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	new_d->age = age;
	new_d->name = name;
	new_d->owner = owner;
	return (new_d);
}
