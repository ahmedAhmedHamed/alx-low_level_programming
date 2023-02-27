#include "main.h"
/**
 * print_rev - helo
 * @s: char
 */
void print_rev(char *s)
{
int k;
while (*s != '\0')
s++;
s--;
while (k--)
_putchar(*s--);
_putchar('\n');
}
