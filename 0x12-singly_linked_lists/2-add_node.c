#include "lists.h"
#include<string.h>
#include<stdlib.h>

/**
 * add_node - add a node to the beginnig of the list
 *
 * @head: pointer to pointer to the list
 * @str: String to be added
 * Return: The address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}

