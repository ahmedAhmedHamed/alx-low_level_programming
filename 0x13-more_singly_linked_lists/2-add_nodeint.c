#include "lists.h"
/**
 * add_nodeint - hello
 * @head: s
 * @n: s
 * Return: listint_t*
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t *));
if (new == 0)
return (0);
new->next = *head;
new->n = n;
*head = new;
return (*head);
}
