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
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}

