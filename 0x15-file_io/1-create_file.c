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
 * create_file - hello
 * @filename: s
 * @text_content: s
 * Return: s
 */
int create_file(const char *filename, char *text_content)
{
int fd;
if (filename == 0)
return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_APPEND | 0600);
if (text_content == 0)
return (1);
write (fd, text_content, _strlen(text_content));
return (1);
}
