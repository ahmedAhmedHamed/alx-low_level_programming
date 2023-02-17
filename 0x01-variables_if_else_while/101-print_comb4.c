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
int k;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 58; k++)
{
if (i >= j || j >= k)
continue;
putchar(i);
putchar(j);
putchar(k);
if (i == 55 && j == 56 && k == 57)
continue;
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
