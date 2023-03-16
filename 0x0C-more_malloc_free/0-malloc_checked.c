#include "main.h"

/**
 * malloc_checked - hello
 * @b: s
 * Return: s
 */
void *malloc_checked(unsigned int b)
{
int *s;
s = malloc(b);
if (s == 0)
exit(98);
return (s);
}
