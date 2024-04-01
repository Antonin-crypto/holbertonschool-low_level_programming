#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list
 *@h: the list_t list.
 *
 * Return: the numbre of nodes in h.
 */
size_t print_list(const list_t *h)
{
	/* Initialize the counter for nodes */
	size_t nodes = 0;

	/* Traverse the list until we reach the end */
	while (h)
	{
		/* Check if the string is NULL */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			/* Print the length and string */
			printf("[%d] %s\n", h->len, h->str);
		/* Increment the node counter */
		nodes++;
		/* Move to the next element of the list */
		h = h->next;
	}
	/* Return the total number of nodes in the list */
	return (nodes);
}
