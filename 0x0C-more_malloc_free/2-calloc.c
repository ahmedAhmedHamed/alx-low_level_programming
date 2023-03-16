#include "main.h"

/**
 * _calloc - hello
 * @nmemb: s
 * @size: s
 * Return: s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *s;
if (nmemb == 0 || size == 0)
return (0);
s = malloc(nmemb * size);
if (s == 0)
return (0);
for (i= 0; i < nmemb+size; i++)
s[i] = 0;
return (s);
}
