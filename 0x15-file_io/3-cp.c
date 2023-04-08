#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * _strlen - helo
 * @s: number
 * Return: number
 */
ssize_t _strlen(char *s)
{
int len;
len = 0;
if (s == 0)
return (0);
while (*s != '\0')
{
s++;
len++;
}
return (len);
}

/**
 * printSentenceToError - hello
 * @one: s
 * @two: s
 */
void printSentenceToError(char *one, char *two)
{
write(2, one, _strlen(one));
write (2, two, _strlen(two));
write(2, "\n", 1);
}


int main()
{
int readed;
int argc = 3;
char *argv[3] = {"11", "helo", "to"};
char str[3];
int file_to;
int file_from;
int close1;
int close2;
if (argc != 3)
return (97);

file_from = open(argv[1], O_RDONLY);

if (file_from < 0)
{
printSentenceToError("Error: Can't read from ", argv[1]);
return (98);
}

file_to = open(argv[2], O_WRONLY | O_CREAT | O_APPEND , 0664);

if (file_to == -1)
{
printSentenceToError("Error: Can't write to ", argv[2]);
return (99);
}

while ((readed = read(file_from, str, 3)) > 0)
write(file_to, str, readed);

close1 = close(file_from);
close2 = close(file_to);

if (close1 == -1)
{
char s = close1 + '0';
write(2, "Can't close fd ", _strlen("Can't close fd "));
write (2, &s, 1);
write(2, "\n", 1);
return (100);
}

if (close2 == -1)
{
char s = close2 + '0';
write(2, "Can't close fd ", _strlen("Can't close fd "));
write (2, &s, 1);
write(2, "\n", 1);
return (100);
}

return (0);
}
