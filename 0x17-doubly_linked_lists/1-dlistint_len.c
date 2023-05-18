#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - gets the length of a linked
 * @h: the list
 * Return: the size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t listSize = 0;
	while (h)
	{
		listSize++;
		h = h->next;
	}
	return (listSize);
}
