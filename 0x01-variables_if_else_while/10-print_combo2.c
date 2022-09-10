#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	j = 48;
	while  ((i < 58) && (j < 58))
	{
		putchar(i);
		putchar(j);
		if ((i == 57) && (j == 57))
		{
			putchar('\n');
			i++;
			j++;
		}
		else
		{
			putchar(44);
			putchar(32);
			if (j < 57)
			{
				j++;
			}
			else
			{
				j = 48;
				i++;
			}
		}

	}

	return (0);
}
