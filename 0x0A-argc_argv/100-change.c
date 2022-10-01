#include<stdio.h>
#include<stdlib.h>

int calcul_(int cents);

/**
* main - prints the minimum number of coins to make a change
*	 for an amount of money
*
* @argc: number of arguments
* @argv: arguments string array
* Return: 1 - if number of arguments is not 1,
*	  0 - if number of arguments is exactly 1.
*/
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("%d\n", calcul_(cents));
	}

	return (0);
}

/**
* calcul_ - calculate number of coins needed
*
* @cents: cents
* Return: The number of coins needed
*/
int calcul_(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		else if	((cents - 10)  >= 0)
		{
			cents -= 10;
			continue;
		}
		else if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;

		}
		else if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		else if ((cents - 1) >= 0)
		{
			cents -= 1;
			continue;
		}
		cents--;
	}

	return (coins);

}

