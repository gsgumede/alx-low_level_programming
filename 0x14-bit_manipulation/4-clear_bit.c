#include "main.h"

/**
 * clear_bit - sets the value of given bit to 0 at given index
 *
 * @n: The long number to set the value of the bit
 * @index: The index at which its set
 * Return:1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long number;

	if (index > 64)
		return (-1);
	if (n == NULL)
		return (-1);
	if (*n == 0)
	{
		number = 0;
		return (number);
	}
	number = 1;
	number <<= index;
	*n ^= number;
	return (1);
}
