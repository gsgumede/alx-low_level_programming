#include "main.h"

/**
 *print_sign - Prints "sign of a number"
 *
 *@n: The number
 *Return: 1-if greater than zero,0-if zero,-1-if less than zero
 */
int print_sign(int n)
{
if (n > 0)/*check if number is zero or is not zero */
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}

}
