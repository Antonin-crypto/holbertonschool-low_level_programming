#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be stored in the new node.
 *
 * Return: Pointer to the last node of the list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*Allocate memory for a new node*/
	list_t *new_list = (struct lists *) malloc(sizeof(struct lists));
	list_t *last = *head;

	/*Check if the head pointer or the new node is NULL*/
	if (head == NULL || new_list == NULL)
		return (0);

	/*Assign the length of the string to the 'len' of the new node*/
	new_list->len = strlen(str);
	/*Dupli the input string and assign it to 'str' of the new node*/
	new_list->str = strdup(str);
	/* Set the next node of the new node as NULL*/
	new_list->next = NULL;

	/*If the list is empty, assign the new node as the head and return it*/
	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}

	/*Traverse the list to the last node*/
	while (last->next != NULL)
		last = last->next;

	/*Assign the next node of the last node as the new node*/
	last->next = new_list;

	/*Return a pointer to the last node of the list*/
	return (last);
}
