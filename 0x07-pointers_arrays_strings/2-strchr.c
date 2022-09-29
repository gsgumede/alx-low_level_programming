#include "main.h"

/**
* _strchr - locates a charater in a string
*
* @s: pointer to an integer
* @c: pointer to char
* Return: pointer to char
*/
char *_strchr(char *s, char c)
{
	int j;
	int i = 0;

	do {
		i++;
		s++;
	} while (*s != '\0');
	s = s - i;
	for (j = 0; j < i; j++)
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return (0);
}
