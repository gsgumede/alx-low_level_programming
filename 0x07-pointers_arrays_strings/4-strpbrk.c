#include "main.h"

/**
* _strpbrk - searches string for any set of bytes
*
* @s: pointer to char
* @accept: pointer to accept
* Return: pointer to char
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(accept + 1) != *s)
			{
				return (s);
			}
		}
	}
	return (0);
}
