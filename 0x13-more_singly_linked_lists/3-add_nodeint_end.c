#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a linked listint_t list.
 * @head: pointer to the first element in the listint_t list
 * @n: The integer for the new node to contain.
 *
 * Return: if the function fails - NULL.
 * otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
