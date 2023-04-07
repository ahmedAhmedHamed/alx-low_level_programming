#include "main.h"
/**
 * flip_bits - gets the difference in bits between two numbers
 * @n: first number
 * @m: second number
 * Return: difference in bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int counter = 0;
int i = 0;
for (i = 0; i < 32; i++)
{
if ((n & 1) == (m & 1))
counter++;
n >>= 1;
m >>= 1;
}
return (32 - counter);
}
