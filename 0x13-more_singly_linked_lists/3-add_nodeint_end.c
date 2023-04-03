#include "lists.h"
/**
 * add_nodeint_end - hello
 * @head: s
 * @n: s
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
if (*head == 0)
{
new = malloc(sizeof(listint_t *));
if (new == 0)
return (0);
new->n = n;
new->next = 0;
*head = new;
return (*head);
}
return (add_nodeint_end(&(*head)->next, n));
}
