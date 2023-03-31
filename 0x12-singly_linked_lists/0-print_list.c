#include "lists.h"
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
 * print_list - hello
 * @param h
 * @return
 */
size_t print_list(const list_t *h)
{
if (h == 0)
return (0);
if (h->str == 0)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", _strlen(h->str), h->str);
return (1 + print_list(h->next));
}
