#include "main.h"
/**
 * _strncpy - helo
 * @dest: desti
 * @src: src
 * @n: n
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n){
int i;
int flag = 0;
flag = 0;
i = 0;
while (i < n)
{
if (flag == 1)
dest[i] = '\0';
else
dest[i] = src[i];
if (dest[i] == '\0')
flag = 1;
i++;
}
return (dest);
}
