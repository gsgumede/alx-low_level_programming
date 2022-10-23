#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - adds a new node at the end of a list
 *
 * @head: pointer to the list
 * @str: string to be added to the node
 * Return: The address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *last_node;
	unsigned int len;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	len = 0;
	while (str[len])
	{
		len++;
	}
	temp->len = len;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = temp;
	}
	return (temp);
}


