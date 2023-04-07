#include "main.h"
/**
 * _strlen - helo
 * @s: number
 * Return: number
 */
int _strlen(const char *s)
{
int len;
len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}

/**
 * binary_to_uint - hello
 * @b: s
 * Return: s
 */
unsigned int binary_to_uint(const char *b)
{
int i;
int multi = 1;
unsigned int x = 0;
int len;
if (b == 0)
return (0);
len  = _strlen(b);
for (i = len - 1; i >= 0; i--)
{
if (b[i] == '1')
{
x += multi;
}
else if (b[i] != '0')
return (0);
multi *= 2;
}
return (x);
}
