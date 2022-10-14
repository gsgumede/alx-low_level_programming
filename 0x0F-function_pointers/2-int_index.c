#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array containing the integers
 * @size: size of the array
 * @cmp: address of the first code of the function
 * Return: position of the integer in the array
 *		   OR -1 if no element matches or size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	
	return (-1);
}
