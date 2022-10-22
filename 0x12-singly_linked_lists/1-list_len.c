#include "lists.h"
#include <stddef.h>

/**
 * list_len - calculates the number of elements in a linked list
 *
 * @h: pointer to linked list
 * Return: The number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}

