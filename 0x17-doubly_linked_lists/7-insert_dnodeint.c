#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a certain index
 * @h: the head
 * @idx: the index to insert at
 * @n: the value of the node to be inserted
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *temptwo = NULL;
	dlistint_t *newNode = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL && idx-- != 1)
		temp = temp->next;
	if (idx != 0)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	temptwo = temp->next;
	newNode->n = n;
	newNode->prev = temp;

	if (temptwo == NULL)
	{
		temp->next = newNode;
		return (newNode);
	}
	temptwo->prev = newNode;
	newNode->next = temptwo;
	temp->next = newNode;
	return (newNode);
}
