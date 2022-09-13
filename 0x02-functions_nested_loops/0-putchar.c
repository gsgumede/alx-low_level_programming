#include "_putchar.c"

/**
 *main - Prints "Putchar into the standard output"
 *
 *Return: 0-always
 */
int main(void)

{
char string[] = "_putchar";/*Declare the array and initialise it*/
int j = 0;
for (j = 0; j < 9 ; j++)
{
_putchar(string[j]);
}

_putchar('\n');

return (0);

}