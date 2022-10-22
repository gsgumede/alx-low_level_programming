#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
void print_con(char *str, unsigned int len);

/**
 * print_list - print all elemets of a list
 *
 * @h: The list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	char *nil;
	unsigned int count, index;

	if (h == NULL)
		return (0);
	nil = "(nil)";
	count = 0;
	while (h != NULL)
	{
		temp = h;
		index = 0;
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(32);
			index = 0;
			while (nil[index])
			{
				_putchar(nil[index]);
				index++;
			}
			_putchar('\n');
		}
		else
		{
			print_con(h->str, h->len);
		}
		h = temp->next;
		count++;
	}
	return (count);
}

/**
 * print_con - print the contents
 *
 * @str: string to be printed
 * @len: length of the string.
 * Return: nothing
 */
void print_con(char *str, unsigned int len)
{
	unsigned int index, number, count_num;
	char *digits;

	number = len;
	index = 1;
	count_num = 0;
	while (number)
	{
		index++;
		number = number / 10;
		count_num++;
	}
	digits = malloc(sizeof(char) * count_num);
	_putchar('[');
	for (index = 0; index  < count_num; index++)
	{
		digits[index] = (len % 10) + '0';
		len = len / 10;
	}
	for (index = 0; index < count_num; index++)
		_putchar(digits[index]);
	_putchar(']');
	_putchar(32);
	index = 0;
	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
	free(digits);
}
