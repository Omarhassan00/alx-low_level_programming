#include "lists.h"

/**
* _strlen - returns length of string
* @v: string who length to check
*
* Return: int length of string
*/

int _strlen(char *v)

{
	int r = 0;

	if (!v)
		return (0);
	while (*v++)
		r++;
	return (r);
}

/**
* print_list - linked list
* @c: pointer to first node
*
* Return: size of list
*/

size_t print_list(const list_t *c)
{
	size_t r = 0;

	while (c)
	{
		printf("[%d] %s\n", _strlen(c->str), c->str ? c->str : "(nil)");
		c = c->next;
		r++;
	}
	return (r);
}
