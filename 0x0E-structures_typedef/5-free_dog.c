#include "dog.h"
#include<stdlib.h>

/**
 * free_dog - free memory of dog
 *
 * @d: address of the struct dog
 * Return: nothing
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
