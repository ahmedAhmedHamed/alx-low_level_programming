#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a certain index
 * @head: the head of the list
 * @index: the index to return
 * Return: the list or NULL if index is invalid
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (head != NULL && index--)
		head = head->next;
	return (head);
}
