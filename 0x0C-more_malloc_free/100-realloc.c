#include "main.h"

/**
 * getMin - hello
 * @one: s
 * @two: s
 * Return: s
 */
int getMin(int one, int two)
{
if (one > two)
return (two);
if (two > one)
return (one);
return (one);
}

/**
 * _realloc - hello
 * @ptr: s
 * @old_size: s
 * @new_size: s
 * Return: hello
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int i;
char *s;
char *s1;
if (old_size == new_size)
return (ptr);
if (ptr == 0)
{
s = malloc(new_size);
if (s == 0)
return (0);
return (s);
}
else if (new_size == 0)
{
free(ptr);
return (0);
}
else
s = malloc(new_size);
if (s == 0)
return (0);
s1 = ptr;
for (i = 0; i < getMin(old_size, new_size); i++)
s[i] = s1[i];
free(ptr);
return (s);
}
