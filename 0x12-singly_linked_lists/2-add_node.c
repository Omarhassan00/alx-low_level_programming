#include "lists.h"

/*
* add_node : adds node to start of list
* @head: address in memory to head node
* @str:str part of node
*
* return:size of list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list-t));

	if (!head || !new_head)
		return (0);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (0);
		}
		new_head->len = _strlen(new_head->str);
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
