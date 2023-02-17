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
while (x < 58)
{
putchar(x++);
if (x != 58)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}

