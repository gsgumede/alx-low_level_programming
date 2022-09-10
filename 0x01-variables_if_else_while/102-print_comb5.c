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
	int i, j, k, l;

	i = j = k = 48; l = 49;
	while  ((i < 58))
	{
		putchar(i); putchar(j); putchar(32); putchar(k); putchar(l);
		if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
		{
			putchar('\n'); i++;
		}
		else
		{
			putchar(44); putchar(32);
			if ((k == 57) && (l == 57))
			{
				if (j < 56)
				{
					l = ++j + 1; k = i;
				}
				else if (j == 56)
				{
					j++; k = i + 1; l = 48;
				}
				else if (j == 57)
				{
					j = 48; l = 49; k = ++i;
				}
			}
			else if (l < 57)
			{
				l++;
			}
			else
			{
				l = 48; k++;
			}
		}
	}
	return (0);
}
