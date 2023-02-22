#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: number
 */
void print_to_98(int n)
{
int i;
int x;
x = 0;
for (i = n; i <= 98; i++)
{
if (i < 0)
_putchar('-');
if (i < -99 && x == 0)
{
_putchar((~i + 1) / 10 / 10 + '0');
_putchar((~i + 1) / 10 % 10 + '0');
_putchar((~i + 1) % 10 + '0');
x = 1;
}
if (i < -9 && x == 0)
{
_putchar((~i + 1) / 10 + '0');
_putchar((~i + 1) % 10 + '0');
x = 1;
}
if (i < 0 && x == 0)
{
_putchar((~i + 1) % 10 + '0');
x = 1;
}
if (i > 9 && x == 0)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
x = 1;
}
if (x == 0)
_putchar(i + '0');
x = 0;
if (i == 98)
{
_putchar('\n');
continue;
}
_putchar(',');
_putchar(' ');
}
}
