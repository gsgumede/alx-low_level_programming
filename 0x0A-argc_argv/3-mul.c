#include<stdio.h>
#include<stdlib.h>

/**
* main - multiplies two integers
*
* @argc: argument count
* @argv: argument value
* Return: 0 always
*/
int main(int argc, char **argv)
{
	int i;
	int j;
	int result;

	if (argc == 3)
	{
		j = atoi(*(argv + 1));
		i = atoi(*(argv + 2));
		result = i * j;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}

