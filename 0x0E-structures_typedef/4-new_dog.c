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
char *strname;
char *strowner;
dog_t myDog;
strcpy(strname, name);
strcpy(strowner, owner);
myDog.name = strname;
myDog.age = age;
myDog.owner = strowner;
return (&myDog);
}
