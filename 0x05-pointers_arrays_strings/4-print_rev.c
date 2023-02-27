#include "main.h"
/**
 * print_rev - helo
 * @s: char
 */
void print_rev(char *s)
{
int k;
k = _strlen(s);
s = s + k - 1;
while (k--)
_putchar(*s--);
_putchar('\n');
}
