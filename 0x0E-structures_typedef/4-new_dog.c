#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - hello
 * @name: s
 * @age: s
 * @owner: s
 * Return: s
 */
dog_t *new_dog(char *name, float age, char *owner)
{
char *strname = malloc(strlen(name) * sizeof(char));
if (strname == 0)
{
free(strname);
return (0);
}
char *strowner = malloc(strlen(owner) * sizeof(char));
if (strowner == 0)
{
free(strowner);
free(strname);
return (0);
}
dog_t *myDog = malloc(sizeof(dog_t));
if (myDog == 0)
{
free(strowner);
free(strname);
free(myDog);
return (0);
}
strcpy(strname, name);
strcpy(strowner, owner);
myDog->name = strname;
myDog->age = age;
myDog->owner = strowner;
return (myDog);
}
