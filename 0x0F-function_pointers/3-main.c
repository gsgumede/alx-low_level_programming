#include "3-calc.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * main - perfom simple operations
 *
 * @argc: number of arguments
 * @argv: strings of arguments
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*(argv[2]) == '%' || *(argv[2]) == '/') && *(argv[3]) == '0')
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);
	printf("%d\n", op(num1, num2));

	return (0);

}
