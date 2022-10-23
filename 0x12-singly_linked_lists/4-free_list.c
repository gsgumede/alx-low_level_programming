#include "lists.h"

/**
* free_list - frees a list
*
* @head: the list
* Return: Nothing
*/
void free_list(list_t *head)
{
	list_t * nodes;
	
	nodes = head;
	for (nodes->next != NULL)
	{
		free(nodes-str);
		head = nodes;
		nodes = nodes->next;
		free (head);

	}
}
