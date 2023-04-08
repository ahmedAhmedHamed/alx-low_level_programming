#include <stdio.h>
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

int main(int argc, char *argv[])
{

char str[1024];
int check;
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

while (read(file_from, str, 1024) > 0)
{
write(file_to, str, _strlen(str));
}

close1 = close(file_from);
close2 = close(file_to);
if (close1 == -1)
{
char *print = '0' + close1;
printSentenceToError("Can't close fd ", print);
return (100);
}

if (close2 == -1)
{
char *print = '0' + close2;
printSentenceToError("Can't close fd ", print);
return (100);
}

}
