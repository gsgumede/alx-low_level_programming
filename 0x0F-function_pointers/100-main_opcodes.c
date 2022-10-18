#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the opcodes of itself.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int buffer, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	buffer = atoi(argv[1]);
	if (buffer < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (index = 0; index < buffer; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);
		if (index == buffer - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}


