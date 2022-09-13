#include "main.h"

/**
 *print_alphabet - Prints "Prints alphabet in lowercase"
 *
 *Return: void
 */

void print_alphabet(void)

{
char ch = 'a';/*Declare the char*/

while (ch <= 'z')
{
_putchar(ch);/*Display each character in a loop*/
}

_putchar('\n');/*Move to next line*/

return;

}
