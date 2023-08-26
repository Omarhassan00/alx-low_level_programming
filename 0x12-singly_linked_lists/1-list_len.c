#include "lists.h"

/*
* list_len : mark the length of linked list
* @c: ptr to first node
*
* Return: size of list
*/

size_t list_len(const list_t *c)
{
	size_t r = 0;

	while (c)
	{
		c = c->next;
		r++;
	}
	return (r);
}
