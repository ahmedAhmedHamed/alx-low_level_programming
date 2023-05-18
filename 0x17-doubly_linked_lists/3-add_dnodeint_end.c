#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of the list
 * @head: the head
 * @n: the number in the new node
 * Return: the address of the new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *temp = *head;
	
	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
