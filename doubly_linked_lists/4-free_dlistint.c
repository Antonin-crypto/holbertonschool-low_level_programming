#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *first_next, *current = head;
	/*Traverse the list*/
	while (current != NULL)
	{
		/*Store the next node's address*/
		first_next = current->next;

		/*Free the current node*/
		free(current);

		/*Move to the next node*/
		current = first_next;
	}
}
