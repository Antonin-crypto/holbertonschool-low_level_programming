#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Pointer to a pointer to the head of the list
 * @n: Value to be stored in the new node
 * Return: Pointer to the newly added node, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*Allocate memory for the new node*/
	dlistint_t *new_node = (struct dlistint_s *)malloc(sizeof(struct dlistint_s));
	dlistint_t *last = *head;

	/*Check if memory allocation was successful and if head is not NULL*/
	if (head == NULL || new_node == NULL)
		return (0);

	/*Set the value of the new node*/
	new_node->n = n;
	/*Set the next pointer of the new node to NULL*/
	new_node->next = NULL;

	/*If the head pointer is NULL, set the head to the new node and return*/
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	/*Traverse the list to find the last node*/
	while (last->next != NULL)
		last = last->next;

	/*Link the new node to the last node*/
	last->next = new_node;

	new_node->prev = last;

	/* Return a pointer to the newly added node*/
	return (last);
}
