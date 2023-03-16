#include "main.h"

/**
 * getNumberOfStrings - hello
 * @str: s
 * Return: s
 */
int getNumberOfStrings(char *str)
{
int i = 0;
int flag = 0;
int counter = 0;

while (str[i] != '\0')
{
if (str[i] != ' ')
flag = 1;

if (str[i] == ' ')
{
if (flag)
counter++;
flag = 0;
}
i++;
}

if (str[i] == '\0' && flag == 1)
counter++;

return (counter);
}

/**
 * allocateMemory - hello
 * @str: s
 * @myStr: s
 * @counter: s
 * Return: bool
 */
int allocateMemory(char *str, char **myStr, int counter)
{
int i;
int j = 0;
int counterTwo = 0;
for (i = 0; i < counter; i++)
{
while (str[j] == ' ')
j++;

while (str[j] != ' ')
{
counterTwo++;
j++;
}

if (counterTwo == 0)
return (0);


myStr[i] = malloc(counterTwo * sizeof(char));

if (myStr[i] == 0)
{
return (0);
}
}

return (0);
}

/**
 * strtow - hello
 * @str: s
 * Return: s
 */
char **strtow(char *str)
{
int i = 0;
int j = 0;
int k = 0;
int flag = 0;
int counter = 0;
char **myStr;
if (str == 0 || str[0] == '\0')
return (0);

counter = getNumberOfStrings(str);

if (counter == 0)
return (0);

myStr = malloc(sizeof(char *) * (counter + 1));




if (myStr == 0)
{
return (0);
}

j = 0;

flag = allocateMemory(str, myStr, counter);

if (flag)
return (0);


j = 0;
flag = 0;
k = 0;

for (i = 0; i < counter; i++)
{
while (str[j] == ' ' && str[j] != '\0')
j++;

while (str[j] != ' ' && str[j] != '\0')
{
myStr[i][k] = str[j];
k++;
j++;
}
myStr[i][k] = '\0';
k = 0;
}

myStr[i] = 0;

return (myStr);
}
