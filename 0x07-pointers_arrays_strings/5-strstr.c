#include "main.h"

/**
* _strstr - locates a substring
*
* @haystack: pointer to string
* @needle: pointer to string
* Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*needle == *haystack)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
