#include "stdio.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
int i = 0;
int num1 = 0;
int mult1 = 1;
while (i >= 0)
{
if (s[i] == '-')
{
num1 *= -1;
i--;
break;
}
num1 += (s[i--] - '0') * mult1;
mult1 *= 10;
}
return (num1);
}

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
if (argc < 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
printf("%d\n", num1 *num2);
return (0);
}
