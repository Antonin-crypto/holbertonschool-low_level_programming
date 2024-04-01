#include "lists.h"
/**
 * free_list - freed a list
 *
 * @head: elements of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *all_node;

	/*Loop through each node in the list*/
	while ((all_node = head) != NULL)
	{
		/* Move to the next node*/
		head = head->next;
		/*Free the string stored in the current node*/
		free(all_node->str);
		/*Free the current node*/
		free(all_node);
	}
}
