#include <stdio.h>

/**
 * main - hello
 *
 * Return: 0 always
 */
int main(void)
{
int i;
int j;
for(i = 48; i<58; i++)
{
for(j = 48; j<58; j++)
{
if (i >= j)
continue;
putchar(i);
putchar(j);
if (i == 56 && j == 57)
continue;
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
