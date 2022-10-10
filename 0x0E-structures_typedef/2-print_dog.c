#include "dog.h"
#include<stdio.h>
#include<stddef.h>

/**
 * print_dog - print elemets of the struct dog
 *
 * @d: struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

}

