#include "main.h"
#include <stdlib.h>

/**
 * create_array - hello
 * @size: s
 * @c: s
 * Return: s
 */
char *create_array(unsigned int size, char c)
{
char *str;
if (size == 0)
return (0);
str = malloc(sizeof(char) * size);
if (str == 0)
return (0);
while (size--)
str[size] = c;
str[0] = c;
return (str);
}
