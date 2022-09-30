#include<stdio.h>

/**
* main - prints each argument passed
*
* @argc: argument count
* @argv: pointer to pointer to char
* Return: 0 always
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}

	return (0);
}

