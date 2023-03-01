#include "main.h"
/**
 * _strcat - helo
 * @dest: num
 * @src: num2
 * Return: char ptr
 */
char *_strcat(char *dest, char *src)
{
int k = 0;
int o = 0;
while (dest[k] != '\0')
{
k++;
}
while (src[o] != '\0')
{
o++;
}
k = 0;
o = 0;
char newp[o + k - 1];
while (dest[k] != '\0')
{
newp[k] = dest[k];
k++;
}
while (src[o] != '\0')
{
newp[k + o] = src[o];
o++;
}
newp[k + o] = '\0';
}
