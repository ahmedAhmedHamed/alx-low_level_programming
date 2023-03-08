#include "main.h"

/**
 * myIsPrime - hello
 * @x: s
 * @y: s
 * Return: s
 */
int myIsPrime(int x, int y)
{
if (x < 0)
return (0);
if (x == 1)
return (0);
if (x % y == 0)
return (0);
if (y > x / 2)
return (1);
return (myIsPrime(x, y + 1));
}

/**
 * is_prime_number - hello
 * @n: s
 * Return: s
 */
int is_prime_number(int n)
{
    return (myIsPrime(n, 2));
}
