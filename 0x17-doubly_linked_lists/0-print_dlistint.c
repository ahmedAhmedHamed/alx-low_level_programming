#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints a linked list
 * @h: list
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t numberOfNodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numberOfNodes++;
		h = h->next;
	}
	return (numberOfNodes);
}
