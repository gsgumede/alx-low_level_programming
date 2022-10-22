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
	unsigned int count;

	if (h == NULL)
		return (0);
	nil = "(nil)";
	count = 0;
	while (h != NULL)
	{
		temp = h;
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("%s\n", nil);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = temp->next;
		count++;
	}
	return (count);
}

