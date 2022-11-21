#include "main.h"
#include <stdio.h>

/**
 * print_binary - print the binary representation of a number
 *
 * @n: The number to print its binary representation
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int number;
	unsigned int count;
	int index;

	number = n;
	count = 0;
	while (number != 0)
	{
		number >>= 1;
		count++;
	}
	index = (int)count - 1;
	do {
		number = 1;
		number <<= index;
		number &= n;
		if (number)
			_putchar('1');
		else
			_putchar('0');
		index--;
	} while (index >= 0);
}
