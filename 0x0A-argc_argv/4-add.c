#include<stdio.h>
#include<stdlib.h>

int check_if_number(int argc, char **argv);
int check_if_digit(char *num);
void add_print(int argc, char **argv);

/**
* main - add two numbers and prints the output
*
* @argc: argument count
* @argv: pointer to pointer to char
* Return: 0 - always
*/
int main(int argc, char **argv)
{

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	else
	{

		if (check_if_number(argc, argv))
		{
			add_print(argc, argv);

		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}

	return (0);
}

/**
* check_if_digit - check if a number
*
* @num: string to be checked
* Return: 1 - if number, 0 if not number
*/
int check_if_digit(char *num)
{
	int j;
	int count = 0;

	for (j = 0; *(num + j) != '\0'; j++)
	{
		if (*(num + j) >= '0' && *(num + j) <= '9')
		{
			count++;
		}
	}

	if (count == j)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
* add_print - add the numbers and  prints result
*
* @argv: arguments string
* @argc: number of arguments
* Return: void
*/
void add_print(int argc, char **argv)
{
	int result = 0;
	int i;

	for (i = 0; i < argc; i++)
	{
		result += atoi(*(argv + i));
	}

	printf("%d\n", result);
}

/**
* check_if_number - check if number
*
* @argc: number of arguments
* @argv: arguments string
* Return: 1 - if its a number
*	  0 - if not a number
*/
int check_if_number(int argc, char **argv)
{
	int i;
	int count = 1;

	for (i = 1; i < argc; i++)
	{
		if (check_if_digit(*(argv + i)))
		{
			count++;
		}
	}

	if (i == count)
	{
		return (1);
	}
	else
	{
		return (0);

	}
}

