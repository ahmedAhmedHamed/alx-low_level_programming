#include "main.h"
/*
 * _strchr - helo
 * @s: char*
 * @c: s
 * Return: char* or null
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return (NULL);
}
