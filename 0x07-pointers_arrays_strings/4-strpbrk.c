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
 * _strpbrk - hello
 * @s: s
 * @accept: accept
 * @Return: s
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        if (inStr(*s, accept))
            return (s);
    }
    return ('\0');
}
