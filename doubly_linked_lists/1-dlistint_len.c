#include "lists.h"

/**
 *list_len - Show the number of elements of a list
 *@h: A linked list
 *
 * Return: the number of elements of a list
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
