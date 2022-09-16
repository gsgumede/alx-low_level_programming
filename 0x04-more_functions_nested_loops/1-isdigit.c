#include "main.h"

/**
 *_isdigit - Checks for a digit (0 through 9)
 *
 *@c: The digit
 *Return: 1-if digit, 0-if not digit
 */
int _isdigit(int c)
{

if (c <= 58 && c >= 48)
{
return (1);
}
else
{
return (0);
}

}
