#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be stored in the new node.
 *
 * Return: Pointer to the newly created node.
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t len = 0;
	const char *ptr = str;
	/*Allocate memory for a new list node*/
	list_t *new_list = (struct lists *) malloc(sizeof(struct lists));

	/*Check if memory allocation was successful or if head pointer is NULL*/
	if (head == NULL || new_list == NULL)
		return (0);

	/*Assign length of the string to the 'len' member of the new node*/
	while (*ptr != '\0') 
	{
		len++;
		ptr++;
	}
	new_list->len = len;
	/*Dupli the input string and assign it to the 'str' member of the new node*/
	new_list->str = strdup(str);
	/*Make the new node point to the current head of the list*/
	new_list->next = *head;
	/*Update the head pointer to point to the new node*/
	*head = new_list;

	/*Return a pointer to the newly created node*/
	return (new_list);
}
