#include "main.h"

/**
 * print_times_table - whatsup
 *
 * @n: number
 */
void print_times_table(int n)
{
int i;
int j;
if (i > 15 || i < 0)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j < 10; j++)
{
if (i * j < 10)
{
_putchar((i * j) + 48);
}
else if (i * j > 9)
{
_putchar(((i * j) / 10) + 48);
_putchar(((i * j) % 10) + 48);
}
if (j == 9)
continue;
_putchar(',');
_putchar(' ');
if (i * (j + 1) <= 9)
_putchar(' ');
}
_putchar('\n');
}
}
