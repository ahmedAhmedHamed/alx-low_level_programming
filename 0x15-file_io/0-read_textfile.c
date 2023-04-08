#include "main.h"

/**
 * read_textfile -
 * @param filename namestring
 * @param letters letters to be copied
 * Return: number of letters copied
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
unsigned int count = 0;
FILE *filePtr;
char *str = 0;
if (filename == 0)
return (0);
filePtr = fopen(filename, "r");
if (filePtr == 0)
return (0);
str = malloc(letters * sizeof(char));
if (str == 0)
return (0);
if (fgets(str, letters, filePtr) == 0)
{
free(str);
fclose(filePtr);
return (0);
}
fclose(filePtr);
count = write(1, str, letters);
if (count != letters)
return (0);
free(str);
return (count);
}
