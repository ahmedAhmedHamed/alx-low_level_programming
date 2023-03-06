#include "main.h"
/*
 * _strchr - helo
 * @s: char*
 * @c: s
 * Return: char* or null
 */
char *_strchr(char *s, char c)
{
int a = 0, b;

while (s[a])
{
a++;
}

for (b = 0; b <= a; b++)
{
if (c == s[b])
{
s += b;
return (s);
}
}

return ('\0');
}
