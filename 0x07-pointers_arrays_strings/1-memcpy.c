#include "main.h"
/**
 * _memcpy - helo
 * @dest: s
 * @src: s
 * @n: s
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int k = 0;
while (n--)
{
dest[k] = src[k];
k++;
}
return (dest);
}
