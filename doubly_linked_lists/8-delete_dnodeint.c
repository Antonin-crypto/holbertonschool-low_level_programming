#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at the index
 *
 * @head: head of the list
 * @index: index to find the node
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmpnode = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(tmpnode);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (tmpnode != NULL)
			tmpnode = tmpnode->next;
		else
			return (-1);
	}

	if (tmpnode->next != NULL)
		tmpnode->next->prev = tmpnode->prev;

	if (tmpnode->prev != NULL)
		tmpnode->prev->next = tmpnode->next;

	free(tmpnode);

	return (1);
}
