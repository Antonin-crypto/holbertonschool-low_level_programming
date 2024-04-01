#include "lists.h"
/**
 * print_dlistint - print a double linked list
 * @h: elements of list
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	/*Traverse the list until h is not NULL*/
	while (h != NULL)
	{
		/*Check if the value of the current node is 0*/
		if (h->n == 0)
		{
			/*If so, print "0" and increment the nodes counter*/
			printf("0\n");
			h = h->next;
			nodes++;
		}
		else
		{
			/*Otherwise, print the value of the node and increment the nodes counter*/
			printf("%d\n", h->n);
			h = h->next;
			nodes++;
		}
	}
	/*Return the total number of nodes in the list*/
	return (nodes);
}
