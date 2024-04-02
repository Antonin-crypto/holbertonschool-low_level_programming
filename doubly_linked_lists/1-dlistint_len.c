#include "lists.h"
/**
 * dlistint_len - sized a list
 *
 * @h: elements
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	/* Initialize the counter */
	size_t number = 0;

	/* Traverse the list until we reach the end */
	while (h)
	{
		/* Move to the next element of the list */
		h = h->next;
		/* Increment the counter */
		number++;
	}
	/* Return the total number of elements in the list */
	return (number);
}
