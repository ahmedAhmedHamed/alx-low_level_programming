#include <stdio.h>

/**
 * main - hello
 *
 * Return: 0 always
 */
int main(void)
{
int x = 65;
int y = 97;
while (y < 97 + 26)
putchar(y++);
while (x < 65 + 26)
putchar(x++);
putchar(10);
return (0);
}
