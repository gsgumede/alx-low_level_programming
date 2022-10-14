#include"function_pointers.h"
/**
* print_name - print the name
*
* @name: name to be printed in string
* @f: address of the first code in the print function
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		(f)(name);
}
