#include "main.h"
/**
 * clear_bit - uses a mask
 * @n: s
 * @index: s
 * Return: s
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 32 || n == 0)
return (-1);
if (index != 0)
*n = (*n & ~(1 << (index)));
else
*n = (*n & ~(1));
return (1);
}
