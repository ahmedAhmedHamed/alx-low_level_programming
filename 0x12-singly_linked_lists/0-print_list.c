#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - helo
 * @s: s
 * Return: s
 */
int _strlen(const char *s)
{
int len;
if (s == 0)
return (-1);
len = 0;
while (s[len] != '\0')
len++;
return (len);
}

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/**
 * print_list - hello
 * @h s
 * Return: s
 */
size_t print_list(const list_t *h)
{
if (h == 0)
return (0);
if (h->str == 0)
printf("[0] (nil)\n");
else
printf("[%d] %s", h->len, h->str);
return(print_list(h->next) + 1);
}
