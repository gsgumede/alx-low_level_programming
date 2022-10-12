/**
* print_name - print the name
*
* @name: name to be printed in string
* @f: address of the first code in the print function
* Return:
*/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);

}
