#include "main.h"
#include<stdlib.h>
#include<stddef.h>

/**
* string_nconcat - concatenates two strings
*
* @s1: first string
* @s2: second string
* @b: length of the second string to be concatenated
* Return: pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0, len, len1 = 0, len2 = 0, i;
	char *concat;

	for (i = 0; s1[i]; i++)
		len2++;
	if (len2 < n)
	{
		n = len2;
	}
	for (i = 0; s1[i]; i++)
		len1++;
	len = len1 + n+ 1;
	concat = malloc(len);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		concat[j++] = s1[i];
	for (i = 0; i < n; i++)
		concat[j++] = s2[i];
	
	concat[j + 1] = '\0';
	return (concat);
}

