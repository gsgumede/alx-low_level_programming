#include<stdio.h>
#include<stddef.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers
*
* @separator: string to be printed between numbers
* @n: number of parameters passed
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	unsigned int cut_of;
	va_list nums;

	if (separator == NULL)
		return;
	if (n == 0)
		return;
	va_start(nums, n);
	cut_of = n;
	cut_of--;
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && index < cut_of)
			printf("%s", separator);
		else
			print(" ");
	}
	printf("\n");
	va_end(nums);
}

