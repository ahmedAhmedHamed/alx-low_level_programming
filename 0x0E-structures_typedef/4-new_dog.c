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
myDog = malloc(sizeof(dog_t));
if (myDog == 0)
{
free(myDog);
return (0);
}
myDog->name = malloc(sizeof(char) * (strlen(name) + 1));
myDog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

if (myDog->owner == 0 || myDog->name == 0 || myDog == 0)
{
free(myDog->name);
free(myDog->owner);
free(myDog);
return (0);
}

strcpy(myDog->name, name);
strcpy(myDog->owner, owner);
myDog->age = age;
return (myDog);
}
