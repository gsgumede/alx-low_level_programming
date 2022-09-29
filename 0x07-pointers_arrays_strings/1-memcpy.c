#include "main.h"

/**
* _memcpy - copies memory area
*
* @dest: pointer to  integer - destination
* @src: pointer to  integer - source
* @n: unsigned integer - number of bytes
* Return: pointer to char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (; j <= n ; j++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
