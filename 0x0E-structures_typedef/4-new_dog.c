#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - hello
 * @name: s
 * @age: s
 * @owner: s
 * Return: s
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *myDog;
char *strname = malloc(strlen(name));
char *strowner = malloc(strlen(owner));

strowner = malloc(strlen(owner));
strname = malloc(strlen(name));
myDog = malloc(sizeof(dog_t));
if (strowner == 0 || strname == 0 || myDog == 0)
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
