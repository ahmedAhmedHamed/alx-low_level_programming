#include <stdlib.h>
/**
 * new_dog - hello
 * @name: s
 * @age: s
 * @owner: s
 * Return: s
 */
dog_t *new_dog(char *name, float age, char *owner)
{
char *strname = malloc(strlen(name));
char *strowner = malloc(strlen(owner));
dog_t *myDog = malloc(sizeof(dog_t));
strcpy(strname, name);
strcpy(strowner, owner);
myDog->name = strname;
myDog->age = age;
myDog->owner = strowner;
return (myDog);
}
