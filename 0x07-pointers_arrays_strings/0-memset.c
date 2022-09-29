#include "main.h"

/**
 *  _memset - fills memory with constant byter
 *
 * @s: pointer to char
 * @c: char
 * @n: integer
 * Return: pointer to char
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *memory = s, value = c;

	for (i = 0; i < n; i++)
		memory[index] = value;

	return (memory);
}
