#include "main.h"
/**
 * print_alphabet - print alphabert lowercase
 *
 * Return: nothing
 */

void print_alphabet(void)
{
char letter; /*Declaring the char*/

/*for letter*/
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);/*print each alphabet*/
}

_putchar('\n'); /*new line*/

}
