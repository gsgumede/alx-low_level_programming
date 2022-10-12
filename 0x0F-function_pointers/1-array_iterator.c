#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: array of elements
 * @size: size of the array
 * @action: the address of the first code of the function to be executed
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}

