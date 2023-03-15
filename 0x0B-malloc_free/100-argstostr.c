#include "main.h"

/**
 * argstostr - hello
 * @ac: s
 * @av: s
 * Return: s
 */
char *argstostr(int ac, char **av)
{
int i = 0;
int j = 0;
int k = 0;
int counter = 0;
char *str;
if (ac == 0 || av == 0 || av[0] == 0)
return 0;
for (i = 0; i < ac; i++)
{
while (av[i][j] != '\0')
{
counter++;
j++;
}
counter++;
j = 0;
}
counter++;
str = malloc(counter);
if (str == 0)
{
free(str);
return 0;
}
j = 0;
for (i = 0; i < ac; i++)
{
while(av[i][j] != '\0'){
str[k] = av[i][j];
k++;
j++;
}
str[k] = '\n';
k++;
j = 0;
}
str[k] = '\0';
printf("%s\n", str);
return (str);
}
