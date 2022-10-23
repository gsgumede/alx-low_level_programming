#include "lists.h"

/**
* add_node - adds a new node at the end of a list
*
* @head: pointer to the list
* @str: string to be added to the node
* Return: The address of the new element or NULL if failed
*/
list_t *add_node_end(list_t **head, const **str)
{
	list_t *temp, last_node;
	unsigned int len, index;
	
	last_node = *head;
	if (last_node != NULL)
	{
		while (last_node->next != NULL)
		{
			last_node = last_node-> next;
		}
	}
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (*str)
	{
		len++;
		str++;
	}
	temp->len = len;
	temp->next = NULL;
	last_node->next = temp;
	return (temp);
}
	
