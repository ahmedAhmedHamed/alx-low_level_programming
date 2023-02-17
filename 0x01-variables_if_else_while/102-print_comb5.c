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
int p;
int count;
count = 58;
for (i = 48; i < count; i++)
{
for (j = 48; j < count; j++)
{
for (k = i; k < count; k++)
{
for (p = j; p < count; p++)
{
if (!(i == 48 && j == 48))
{
i++;
j++;
}
putchar(i);
putchar(j);
putchar(44);
putchar(k);
putchar(p);
if (i == 57 && j == 56 && k == 57 && p == 57)
continue;
putchar(32);
putchar(44);
}   
}   
}
}
putchar(10);
return(0);
}
