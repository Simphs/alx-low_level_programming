#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node
 *
 * Return: 1 (Success), or -1 (Fail)
 */
listint_t *temp = *head;
listint_t *current = NULL;
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	listint_t *temp = *head;
	for (unsigned int i = 0; i < index - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	listint_t *current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
