#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: pointer to the listint_t list to be freed
 *
 * This function frees all nodes in the linked list pointed to by 'head'.
 * It also sets the value of 'head' to NULL after freeing all nodes.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
