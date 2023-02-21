#include "main.h"

/**
 * print_last_digit - hey
 * @c: input digit
 *
 * Return: last digit
 */
int print_last_digit(int c)
{
if (c >= 0)
{
_putchar(c % 10 + 48);
return (c % 10);
}
int k;
k = ~c + 1;
_putchar(k % 10 + 48);
return (k % 10);
}
