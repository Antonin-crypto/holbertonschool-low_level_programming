#include "lists.h"
/**
 * add_dnodeint - Add a new node at the beginning of a doubly linked list
 * @head: Pointer to a pointer to the head of the list
 * @n: Value to be stored in the new node
 * Return: Pointer to the newly added node, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodes;

	/*Allocate memory for the new node*/
	new_nodes = (dlistint_t *)malloc(sizeof(dlistint_t));

	/*Check if allocation was successful and if head is not NULL*/
	if (head == NULL || new_nodes == NULL)
		return (0);

	/* Set the value of the new node*/
	new_nodes->n = n;
	/*Set the next pointer of the new node to the current head*/
	new_nodes->next = *head;
	/*Set the previous pointer of the new node to NULL*/
	new_nodes->prev = NULL;

	/*If the current head is not NULL*/
	if (*head != NULL)
		(*head)->prev = new_nodes;

	/*Update the head pointer to point to the new node*/
	*head = new_nodes;

	/*Return a pointer to the newly added node*/
	return (new_nodes);
}
