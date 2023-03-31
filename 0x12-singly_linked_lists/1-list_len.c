#include "lists.h"
/**
 * list_len - hello
 * @h: s
 * Return: s
 */
size_t list_len(const list_t *h)
{
if (h == 0)
return (0);
return (1 + list_len(h->next));
}
