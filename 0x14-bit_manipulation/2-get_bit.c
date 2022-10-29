#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * 
 * @n: The number used to get the bit
 * @index: The index
 * Return: The value of the bit at index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int temp;

    if (index > 64)
        return (-1);
    temp = 1;
    temp <<= index;
    n &= temp;
    if (n)
        return (1);
    else
        return (0);
}

