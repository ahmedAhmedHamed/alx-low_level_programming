#include "main.h"
/**
 * get_bit - hello
 * @n: s
 * @index: s
 * Return: s
 */
int get_bit(unsigned long int n, unsigned int index)
{
int sol;
if (index > 32)
return (-1);
sol = n | ((n >> index) & 1);
return (sol);
}
