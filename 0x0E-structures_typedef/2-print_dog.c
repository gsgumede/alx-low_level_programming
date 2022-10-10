#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print elemets of the struct dog
 *
 * @d: struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %2.2f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

}

