#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 *
 * @b: The string composed of 1s and 0s
 * Return: The converted number or 0 if there is one or more chars
 *			in the string b that is not 1s and 0s or b if is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number, temp;
	int len, count;

	if (b == NULL)
		return (0);
	len = 0;
	while(b[len])
	{
		len++;
	}
	number = 0, count = 0;
	while(len > 0)
	{
		len--;
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] == '1')
		{
			temp = 1;
			temp <<= count;
			number = temp | number;
		}
		count++;
	}
	return (number);
}
