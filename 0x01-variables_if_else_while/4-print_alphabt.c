#include <stdio.h>

/**
 * main - hello
 *
 * Return: 0 always
 */
int main(void)
{
int x = 96;
while (x < 97 + 26)
{
x++;
if (x == 113 || x == 101 || x >= 97 + 26)
continue;
putchar(x);
}
putchar(10);
return (0);
}
