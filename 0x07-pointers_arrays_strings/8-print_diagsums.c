#include "main.h"
#include<stdio.h>

/**
* print_diagsums - print the sum of two diagonals of a
*		   square of a matrix of integers
*
* @a: pointer to int
* @size: integer
* Return: nothing
*/
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int j = 0;
	int i = 0;

	for (; j < size; j++)
	{
		sum1 += *(a + j);
		a += size;
	}
	a -= size;
	for (; i < size; i++)
	{
		sum2 += *(a + i);
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}

