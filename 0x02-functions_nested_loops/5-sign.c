#include "main.h"

/**
 * print_sign - hello
 * @n: potato
 *
 * Return: different always
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
