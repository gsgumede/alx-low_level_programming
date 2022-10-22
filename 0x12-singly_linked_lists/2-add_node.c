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
	unsigned int len;

	if (head == NULL || str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
		return (NULL);
	len = 0;
	while (str[len])
	{
		len++;
	}
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (temp);
}

