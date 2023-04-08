#include "main.h"

/**
 * _strlen - helo
 * @s: number
 * Return: number
 */
ssize_t _strlen(char *s)
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

/**
 * getMin - gets the minimum of the two numbers
 * @one: s
 * @two: s
 * Return: s
 */
int getMin(int one, int two)
{
if (one < two)
return (one);
return (two);
}

/**
 * read_textfile - hello
 * @filename: namestring
 * @letters: letters to be copied
 * Return: number of letters copied
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd = open(filename, O_RDONLY);
char str[1000];
int check;
int printed;
if (fd == -1)
return (0);
check = read(fd, str, letters);
close(fd);
if (check == -1)
{
return (0);
}
printed = write(1, str, check);
if (printed != check)
return (0);
return (printed);
}
