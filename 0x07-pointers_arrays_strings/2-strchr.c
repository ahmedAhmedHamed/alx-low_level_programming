#include "main.h"
/*
 * _strchr - helo
 * @s: char*
 * @c: s
 * Return: char* or null
 */
char *_strchr(char *s, char c)
{
int k = 0;
while (s[k] != '\0')
{
if (s[k] == c)
return (s + k);
k++;
}
return ('\0');
}
