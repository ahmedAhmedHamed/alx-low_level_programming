#include "main.h"
/**
 * inStr - checks if c is in str
 * @c: s
 * @str: s
 * Return: bool
 */
int inStr(char c, char *str)
{
while (*str != '\0')
{
if (*str == c)
return (1);
str++;
}
return (0);
}

/**
 * _strspn - stringspan
 * @s: s
 * @accept: s
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
int counter = 0;
while (*s != '\0')
{
if (inStr(*s, accept))
counter++;
else
break;
s++;
}
return (counter);
}
