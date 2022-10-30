#include "main.h"
#include <stddef.h>

/**
 * set_bit - a function that sets a value of a bit
 *
 * @n: The pointer to an lon number
 * @index: The index
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number;

	number = 1;
	if (n == NULL)
		return (-1);
	if (index > 64)
		return (-1);
	number <<= index;
	*n |= number;
	return (1);
}

