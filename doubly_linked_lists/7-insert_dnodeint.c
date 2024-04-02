#include "lists.h"
/**
 * insert_dnodeint_at_index - add a node at the index
 * @idx: the index
 * @h: the head of the list
 * @n: the data to add
 *
 * Return: the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int i;

	new_node = (struct dlistint_s *)malloc(sizeof(struct dlistint_s));

	if (h == NULL || new_node == NULL)
		return (0);

	tmp = *h;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	new_node->n = n;

	for (i = 0; i < idx - 1 ; i++)
	{
		if (tmp != NULL)
			tmp = tmp->next;
		else
			return (0);
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	new_node->prev = tmp;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
