#include "main.h"

/**
 *jack_bauer - Prints every minute of the day
 *
 *Return: nothing
 */
void jack_bauer(void)
{
int h1 = 0;
int n1 = 0;
/*loop through each unit of time and print it*/
while (h1 <= 2)
{
int h2 = 0;
if (h1 < 2)/*check if the first unit of an hour is less than two*/
{
n1 = 9;
}
else
{
n1 = 3;
}
while (h2 <= n1)
{
int m1 = 0;
while (m1 <= 5)
{
int m2 = 0;
while (m2 <= 9)
{
_putchar('0' + h1);
_putchar('0' + h2);
_putchar(':');
_putchar('0' + m1);
_putchar('0' + m2);
_putchar('\n');
m2++;
}
m1++;
}
h2++;
}
h1++;
}

}
