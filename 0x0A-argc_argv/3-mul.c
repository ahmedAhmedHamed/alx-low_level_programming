#include "stdio.h"
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 1
 */
int main(int argc, char *argv[])
{
int num1 = 0;
int num2 = 0;
int mult1 = 1;
int mult2 = 1;
int i;
int j;
if (argc < 3)
{
printf("Error\n");
return (1);
}
for (i = 0; argv[1][i] != '\0'; i++)
;
for (j = 0; argv[1][j] != '\0'; j++)
;
i--;
j--;
while (i >= 0)
{
if (argv[2][i] == '-')
{
num1 *= -1;
break;
}
num1 += (argv[1][i--] - '0') * mult1;
mult1 *= 10;
}
while (j >= 0)
{
if (argv[2][j] == '-')
{
num2 *= -1;
break;
}
num2 += (argv[2][j--] - '0') * mult2;
mult2 *= 10;
}
printf("%d\n", num1 *num2);
return (0);
}
