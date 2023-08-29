#include "lists.h"
#include <stdlib.h>

/*
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to the pointer to the first element in the linked list
 *
 * This function removes the head node from the linked list
 * It returns the data stored in the removed node, or 0 if the list is empty.
 *
 * Return: The data inside the removed node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
