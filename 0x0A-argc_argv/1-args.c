#include<stdio.h>

/**
* main - prints the number of arguments passed
*
* @argv: pointer to pointer to char
* @argc: arguments count
* Return: 1 Always
*/
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc);
}

