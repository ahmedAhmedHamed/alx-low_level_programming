#include "main.h"

/**
 * _strlen - helo
 * @s: number
 * Return: number
 */
size_t _strlen(char *s)
{
size_t len;
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
size_t count = 0;
size_t check = 0;
size_t letterscopy = letters;
FILE *filePtr;
char str[1000];
if (filename == 0)
return (0);
filePtr = fopen(filename, "r");
if (filePtr == 0)
return (0);
while (fgets(str, letterscopy, filePtr) != 0 && (letters - count) > 0)
{
check = write(1, str, getMin(_strlen(str), letters - count));
if (check != getMin(_strlen(str), letters - count))
return (0);
count += check;
}
fclose(filePtr);
return (count);
}
