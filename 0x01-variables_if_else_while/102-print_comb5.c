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
for (i = 0; i <= 98; i++)
{
for (j = i + 1; j <= 99; j++){
putchar(((i / 10) % 10) + 48);
putchar((i % 10) + 48);
putchar(32);
putchar(((j / 10) % 10) + 48);
putchar((j % 10) + 48);
if (i == 98 && j == 99)
break;
putchar(44);
putchar(32);
}
}
putchar(10);
return(0);
}
