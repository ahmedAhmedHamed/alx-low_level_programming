#include "main.h"

/**
 * mySqrt - essentially a for loop
 * @x: n
 * @y: n
 * Return: s
 */
int mySqrt(int x, int y)
{
    if (x == 1)
        return (1);
    if (y >= x / 2)
        return (-1);
    if (y * y == x)
        return (y);
    mySqrt(x, y+1);
}

/**
 * _sqrt_recursion - hello
 * @n: s
 * Return: s
 */
int _sqrt_recursion(int n)
{
    mySqrt(n, 1);
}
