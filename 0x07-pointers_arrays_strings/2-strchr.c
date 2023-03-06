#include "main.h"
/*
 * _strchr - helo
 * @s: char*
 * @c: s
 * Return: char* or null
 */
char *_strchr(char *s, char c)
{
int i = 0;
int j = 0;

while (s[i])
{
i++;
}

while (j <= i)
{
if (s[j] == c)
{
s += j;
return (s);
}
}

return ('\0');
}
