#include "main.h"

/**
 *_isalpha - check alphabetic character
 *
 *@c: The int of the alphabet
 *Return: 1-if alphabet, 0-if not
 */
int _isalpha(int c)
{
	if ((c => 'a') && (c =< 'z')) || (c => 'A' && c =< 'Z'))
		return (1);
	else
		return (0);
}

