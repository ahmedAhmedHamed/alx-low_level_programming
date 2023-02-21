#include "main.h"

/**
 * times_table - times table
 */
void times_table(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (i * j < 10)
{
_putchar((i * j) + 48);
}else if (i * j > 9)
{
_putchar(((i * j) / 10) + 48);
_putchar(((i * j) % 10) + 48);
}
if (j == 9)
continue;
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
