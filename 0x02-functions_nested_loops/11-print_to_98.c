#include "main.h"

/**
 *print_to_98 - Prints all natural numbers
 *
 *@n: The initial start
 *Return: nothing
 */
void print_to_98(int n)
{

while (n <= 98)/*loop through and print each number*/
{
if (n < 10)
{
_putchar('0' + n);
}
else
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
}
if (n < 98)
_putchar(32);
_putchar(',');
}
}
