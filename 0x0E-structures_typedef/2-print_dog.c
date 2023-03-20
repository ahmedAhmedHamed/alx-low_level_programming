#include "dog.h"
#include <stdio.h>
/**
 * print_dog - hello
 * @d: s
 */
void print_dog(struct dog *d)
{
if (d == 0)
return;
printf("Name: ");
if (d->name != 0)
printf("%s\n", d->name);
else
printf("nil\n");
printf("Age: ");
printf("%f\n", d->age);
printf("Owner: ");
if (d->owner == 0)
printf("nil");
else
printf("%s\n", d->owner);
}
