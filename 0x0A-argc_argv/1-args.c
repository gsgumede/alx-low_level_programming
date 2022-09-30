#include<stdio.h>

/**
* main - prints the number of arguments passed
*
* @argv: pointer to pointer to char
* @argc: arguments count
* Return: 0 Always
*/
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

