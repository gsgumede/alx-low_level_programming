#include<stdarg.h>

/**
 * sum_them_all - sum all the parameters
 *
 * @n: the number of parameters passed
 * Return: 0 - if the number of parameters is 0
 *	   The sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum;
	va_list nums;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (index = 0; index < n; index++)
		sum = sum + va_arg(nums, int);
	va_end(nums);
	return (sum);
}

