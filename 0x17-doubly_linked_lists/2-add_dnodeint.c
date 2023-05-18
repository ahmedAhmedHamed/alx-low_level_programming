#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning
 * @head: the head of the list
 * @n: the number in the node
 * Return: the address of the element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head != NULL)
		(*head)->prev = newNode;
	newNode->n = n;
	*head = newNode;

	return (*head);
}
