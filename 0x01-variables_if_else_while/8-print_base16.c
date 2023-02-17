#include <stdio.h>

/**
 * main - hello
 *
 * Return: 0 always
 */
int main(void)
{
int x;
x = 48;
while (x < 103)
{
if (x == 58)
x = 97;
putchar(x++);
}
return (0);
}
