#include "lists.h"
/**
 * get_dnodeint_at_index - Retriev the nod at a given index in a dou link list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve.
 *
 * Return: void
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new_node;
	unsigned int i;

	new_node = (struct dlistint_s *) malloc(sizeof(struct dlistint_s));

	/*Check if the list is empty*/
	if (head == NULL || new_node == NULL)
		return (0);

	/*Traverse the list to find the node at the specified index*/
	for (i = 0 ; i < index ; i++)
	{
		if (head != NULL)
			/*Move to the next node*/
			head = head->next;
		else
			return (0);
	}
	new_node->n = head->n;

	return (new_node);
}
