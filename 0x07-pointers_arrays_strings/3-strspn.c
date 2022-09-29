#include "main.h"

/**
* _strspn - gets the length of a prefix substring
*
* @s: pointer to char
* @accept: pointer to char
* Return: Number of bytes in the initial segments of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				i++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (i);
		}

		s++;
	}

	return (i);
}
