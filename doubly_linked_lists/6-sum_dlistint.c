#include "lists.h"
/**
 * sum_dlistint - sum of the n elements of a list
 *
 * @head: elements of list
 * Return: an int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	const dlistint_t *p = head;

	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
