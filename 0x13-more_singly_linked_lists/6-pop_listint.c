#include "lists.h"
/**
 * pop_listint - hello
 * @head: s
 * Return: int
 */
int pop_listint(listint_t **head)
{
int x;
listint_t *temp;
if (head || *head == 0)
return (0);
x = (*head)->n;
temp = *head;
*head = (*head)->next;
free (temp);
return (x);
}
