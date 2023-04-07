#include "main.h"

/**
 * myPrintBinary - prints number in binary (doesn't work if number is zero)
 * @n: number to be converted
 */
void myPrintBinary(unsigned long int n)
{
if (n == 0)
{
return;
}
myPrintBinary(n >> 1);
_putchar((n & 1) + '0');
}

/**
 * print_binary - driver for myPrintBinary (necessary because of special case of n == 0)
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
if (n == 0)
_putchar('0');
else
myPrintBinary(n);
}
