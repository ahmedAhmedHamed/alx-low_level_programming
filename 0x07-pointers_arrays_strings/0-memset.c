#include "main.h"
/**
 * _memset - helo
 * @s: char*
 * @b: b
 * @n: n
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
int k = 0;
while (n--)
{
s[k++] = b;
}
return (s);
}
