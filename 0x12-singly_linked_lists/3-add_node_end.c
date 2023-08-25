#include "lists.h"

/*
* add_node_end - add node to end of list
* @head: address of pointer to node
* @str: field of node
*
* return: size of list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_node)
		return (0);
	if (str)
	{
		new_node->str =strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (0);
		}
		new_node->len = _strlen(new_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
