#include "lists.h"
/**
 * listint_len - hello
 * @h: s
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
int i = 0;
while (1)
{
if (h == 0)
return (i);
h = h->next;
i++;
}
return (-1);
}
