#ifndef Lists_h
#define Lists_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *struct list_s - singly linked list
 *@str: string - (malloc'ed string)
 *@len: length of the string
 *@next: points to the next node
 *
 *Description: singly linked list node structure
 */
typedef struct list_s
{
	    char *str;
	        unsigned int len;
		    struct list_s *next;
} list_t;

 int _putchar(char b);
 int _strlen(char *v);
 size_t print_list(const list_t *c);
size_t list_len (const list_t *c);
list_t *add_node(list_t **head, const char *ptr);
list_t *add_node_end(list_t **head, const char *ptr);
void free_list(list_t *head);
void _constructor(void) _attribute_ ((constructor));
#endif
