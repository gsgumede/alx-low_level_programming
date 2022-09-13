#include "main.h"

/**
 *_islower - check if alphabet is lowercase
 *
 *@c: The int representing an alphabet
 *Return: 1-lowercase, 0-not lowercae
 */
int _islower(int c)
{
if (c <= 122 && c >= 97)/*check if c is between 97 and 122*/
{
return (1);
}
else
{
return (0);
}

}
