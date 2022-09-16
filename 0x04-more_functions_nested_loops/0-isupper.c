#include "main.h"

/**
*_isupper - checks for uppercase character
*
*@c: The character in ASICII intenger format
*Return: 0-if uppercase, 1-if lowercase
*/
int _isupper(int c)
{
if ((c >= 65) && (c <= 90))/*Start of if-loop*/
{
return (0);
}
else
{
return (1);
}

}
