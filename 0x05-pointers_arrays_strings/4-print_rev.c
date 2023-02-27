#include "main.h"
/**
 * print_rev - helo
 * @s: char
 */
void print_rev(char *s)
{
int k;
k = 0;
while (*s != '\0')
{
k++;
s++;
}
s--;
while (k--)
_putchar(*s--);
_putchar('\n');
}
