#include "lists.h"

/**
 * print_listint - hello
 * @h: s
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
int i = 0;
while (1)
{
if (h == 0)
return (i);
printf("%d\n", h->n);
h = h->next;
i++;
}
return (-1);
}
