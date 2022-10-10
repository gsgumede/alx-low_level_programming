#include "dog.h"
#include<stddef.h>

/**
* init_dog - initializes variable struct dog
*
* @d: struct dog
* @name: string name of the dog
* @age: float age of the dog
* @owner: string name of the dog.
* Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
