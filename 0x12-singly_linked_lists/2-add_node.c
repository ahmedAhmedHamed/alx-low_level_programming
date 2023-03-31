#include "lists.h"
/**
 * add_node - hello
 * @head: s
 * @str: s
 * Return: s
 */
list_t *add_node(list_t **head, const char *str) {
list_t *temp = malloc(sizeof(list_t *));
list_t *temp2 = malloc(sizeof(list_t *));
if (str == 0)
return (0);
temp = *head;
temp2->str = strdup(str);
temp2->len = _strlen(str);
temp2->next = temp;
*head = temp2;
return (*head);
}
