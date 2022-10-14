#include<stdio.h>
#include<stddef.h>
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
	unsigned int cut_off;
	va_list nums;

	va_start(nums, n);
	cut_off = n;
	cut_off--;
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && index < cut_off)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);

}
