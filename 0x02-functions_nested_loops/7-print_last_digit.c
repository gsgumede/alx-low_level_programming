#include "main.h"
#include <limits.h>

/**
 *print_last_digit - Prints the last digit of a number
 *
 *@n: The number
 *Return: Value of the last digit
 */
int print_last_digit(int n)
{
int remainder;
if (n == INT_MIN)
{
remainder = (-2147483648 * -1) % 10;
}
else if (n == INT_MAX)
{

remainder = 2147483647 % 10;
}
else if (n < 0)
{
n = n * -1;
remainder = n % 10;
}
else
{
remainder = n % 10;
}

_putchar('0' + remainder);
return (remainder);

}
