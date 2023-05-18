#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: the head
 * @index: the index
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temptwo = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		(*head)->prev = NULL;
		return (1);
	}

	while (temp != NULL && index-- != 1)
		temp = temp->next;

	if (index != 0)
		return (-1);

	temptwo = temp->next;
	if (temptwo->next == NULL)
	{
		temp->next = NULL;
		free(temptwo);
		return (1);
	}
	temp->next = temptwo->next;
	temptwo->next->prev = temp;
	free(temptwo);
	return (1);
}
