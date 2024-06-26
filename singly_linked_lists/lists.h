#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct lists - structure of list
 * @str: strings or char
 * @len: size of strings
 * @next: poitner for the next node
*/
typedef struct lists
{
	char *str;
	int len;
	struct lists *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /*LISTS_H*/
