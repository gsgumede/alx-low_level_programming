#include<stddef.h>
#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 *
 * @separator: separator of strings to printed
 * @n: number of parameters passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	unsigned int num_tmp;
	char *tmp;
	va_list strin;

	va_start(strin, n);
	num_tmp = n;
	num_tmp--;
	for (index = 0; index < n; index++)
	{
		tmp = va_arg(strin, char*);
		if (tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);
		if (separator != NULL && index < num_tmp)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strin);
}

