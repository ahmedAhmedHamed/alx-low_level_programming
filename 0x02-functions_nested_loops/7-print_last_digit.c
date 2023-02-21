#include "main.h"

/**
 * print_last_digit - hey
 * @c: input digit
 *
 * Return: last digit
 */
int print_last_digit(int c)
{
int k;
if (c >= 0)
{
_putchar(c % 10 + 48);
return (c % 10);
}
if (c == -2147483646)
{
_putchar(6 + '0');
return (6);
}
k = ~c + 1;
_putchar(k % 10 + 48);
return (k % 10);
}
