#include "lists.h"
#include<stdlib.h>
#include<stddef.h>

void print(char *str, unsigned int len);

/**
* print_list - print all the elements of a list
*
* @h: the pointer to the list
* Return: The number of nodes.
*/
size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (NULL);
	while (h != NULL)
	{
		print (h->str, h->len);
		h = h->next;
		count++;
	}
}
/**
* print - print elements
*
* @str: string to be printed
* @len: len of the string to be printed
* Return: Nothing
*/
void print(char *str, unsigned int len)
{
	unsigned int index, count, temp;
	unsigned int *ptr;

	_putchar('[');
	count = 0;
	temp = len;
	while (temp != 0)
	{
		count++;
		temp / 10;
	}
	ptr = malloc(sizeof(int) * count);
	temp = len;
	for (index = 0; index < count; index++)
	{
		ptr[index] = temp % 10;
		temp = temp / 10;
	}
		_putchar('[');
		count--;
		for (index = count; index > 0; index--)
		_putchar(ptr[index]);
		_putchar('[');
		_putchar(32);
	if (str == NULL)
	{
		_putchar('[');
		_putchar('0' + 0);
		_putchar(']');
	}
	else
	{
		while (str)
		{
		_putchar(*str);
		str++;
		}
	}
}

