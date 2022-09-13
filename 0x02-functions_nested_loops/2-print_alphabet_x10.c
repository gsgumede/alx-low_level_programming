#include "main.h"

/**
 *print_alphabet_x10 - Prints 10x the alphabet in lowercase
 *
 *Return: nothing
 */
void print_alphabet_x10(void)
{
int i;/*Declare initial value in inner loop*/
int j;/*Declare initial value for outer loop*/

char alphabet = 'a';/*Declare and initialise the first alphabet*/

/*alphabet loop*/
for (i = 0; i <= 9; i++)
{
for (j = alphabet; j <= 'z'; j++)
{
_putchar(j);/*Display each alphabet*/
}
_putchar('\n');/*New line*/
}

return;

}
