#include "main.h"
/**
 * _strncat - helo
 * @dest: helo
 * @src: helo
 * @n: number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
;
j = 0;
while (j < n && src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}
dest[i + j] = '\0';
return (dest);
}
