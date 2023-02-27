#include "main.h"
/**
 * _strcpy - helo
 * @dest: str
 * @src: str
 * Return: charpointer
 */
char *_strcpy(char *dest, char *src)
{
int k;
k = 0;
while (*(src + k) != '\0')
dest[k] = src[k++];
dest[k] = src[k];
return (dest);
}
