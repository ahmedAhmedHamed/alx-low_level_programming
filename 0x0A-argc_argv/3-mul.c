#include "stdio.h"
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 1
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
if (argc < 3)
{
printf("Error\n");
return (1);
}
if (argv[1][1] != '\0')
num1 = (argv[1][1] - '0') * -1;
else
num1 = *argv[1] - '0';
if (argv[2][1] != '\0')
num2 = (argv[2][1] - '0') * -1;
else
num2 = *argv[2] - '0';
printf("%d\n", num1 * num2);
return (0);
}
