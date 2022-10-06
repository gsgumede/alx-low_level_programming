#include "main.h"
#include<stdlib.h>
#include<stddef.h>

/**
 * array_range - creates array of integers
 *
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the first element or NULL if min > max or
 * 	   NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	ptr = malloc(len * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		ptr[i] = i;
	return (ptr);	
}

