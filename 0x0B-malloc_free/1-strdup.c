#include "main.h"

/**
 * _strdup - hello
 * @str: s
 * Return: s
 */
char *_strdup(char *str)
{
int k = 0;
char * myStr;
if (str == 0)
return (0);

while (str[k] != '\0')
k++;
k++;

myStr = malloc(sizeof(char) *k);

if (myStr == 0)
return (0);

while (k--)
myStr[k] = str[k];
myStr[k] = str[k];

return (myStr);
}
