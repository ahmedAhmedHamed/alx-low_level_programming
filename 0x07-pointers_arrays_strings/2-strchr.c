#include "main.h"

/**
 * _strchr - helo
 *
 * @s: char array
 * @c: char
 *
 * Return: char pointer
 */

char *_strchr(char *s, char c)
{
int a = 0;
int b;

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
