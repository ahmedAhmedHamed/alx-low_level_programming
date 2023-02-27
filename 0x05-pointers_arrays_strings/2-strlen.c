/**
 * _strlen(char *s) - helo
 * @s: number
 * Return: number
 */
int _strlen(char *s)
{
int len;
len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
