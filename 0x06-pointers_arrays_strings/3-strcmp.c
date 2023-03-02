#include "main.h"
/**
 * _strcmp - helo
 * @s1: n
 * @s2: n2
 * Return: helo
 */
int _strcmp(char *s1, char *s2)
{
int c1;
int c2;
int n1;
int n2;
n1 = 0;
n2 = 0;
c1 = 0;
c2 = 0;
while (*s1 != '\0')
{
n1 += *s1++;
c1++;
}
while (*s2 != '\0')
{
c2++;
n2 += *s2++;
}
if (n1 > n2)
return (1);
else if (n2 > n1)
return (-1);
else
return (0);
}
