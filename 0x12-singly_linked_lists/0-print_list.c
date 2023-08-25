#include "lists.h"
/*
 * strlen - returns length of string
 * @v: string who length to check
 *
 * return: int length of string
 */

int _strlen(char *v)
{
	int r = 0 ;
	if(!v)
		return 0;
	while (*v++)
		r++;
	return r;
}
/*
 * print_list - linked list
 * @c: pointer to first node
 *
 * return: size of list
 */

size_t print_list(const list_t *c)
{
	size_t r = 0 ;
	while(c)
	{
		printf("[%d] %s\n",_strlen(c->ptr),c->ptr ? c->ptr : "(nil)");
		c = c->next;
		r++;
	}
	return r;
}
