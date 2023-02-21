#include "main.h"

/**
 * print_alphabet - helo
 */
void print_alphabet_x10(void)
{
int j;
int i;
for (i = 0; i < 10; i++)
{
for (j = 97; j < 123; j++)
_putchar((char) j);
_putchar('\n');
}
}
