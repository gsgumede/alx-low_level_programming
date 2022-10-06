#include "main.h"
#include<stdlib.h>
#include<stddef.h>

/**
* malloc_checked - allocates memory using malloc and returns allocated memory
*
* @b: size of buffer
* Return: first address of aloocated memory.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

