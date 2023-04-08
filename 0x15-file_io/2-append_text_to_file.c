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
 * append_text_to_file - hello
 * @filename: s
 * @text_content: s
 * Return: s
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int check;
if (filename == 0)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);

if (fd < 0)
return (-1);
if (text_content == 0)
return (1);

check = write (fd, text_content, _strlen(text_content));
close(fd);
if (check == -1)
return (-1);
return (1);
}
