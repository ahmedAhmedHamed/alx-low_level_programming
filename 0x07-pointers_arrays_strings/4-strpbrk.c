#include "main.h"

/**
 * inStr - checks if c is in str
 * @c: s
 * @str: s
 * Return: bool
 */
bool inStr(char c, char* str)
{
while (*str != '\0')
{
if (*str == c)
return true;
str++;
}
return false;
}

/**
 * _strspn - stringspan
 * @s: s
 * @accept: s
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
int k = 0;
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
