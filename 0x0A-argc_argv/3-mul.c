#include "stdio.h"
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 1
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", (*argv[1] - '0') * (*argv[2] - '0'));
return (0);
}
