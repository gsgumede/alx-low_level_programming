#include<stdio.h>

/**
* main - prints the name of the program
*
* @argv: pointer to pointer to char
* @argc: argument count
* Return: Always 0
*/
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}

