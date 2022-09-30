#include<stdio.h>
#include<stdlib.h>

/**
* main - add two numbers and prints the output
*
* @argc: argument count
* @argv: pointer to pointer to char
* Return: 1 always
*/
int main(int argc, char **argv)
{
	int j;
	int i;
	int count = 0;
	int result = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	for (i = 0; i < argc; i++)
	{
		if (atoi(*(argv + i)) == 0)
		{
			count++;
		}
	}

	if (count > 1)
	{

		printf("ERROR\n");

	}

	else if (argc > 1 )
	{
		for (j = 0; j < argc; j++)
		{
			result += atoi(*(argv + j));

		}
		 printf("%d\n", result);
	}

	return (1);

}

