#include "dog.h"

/**
* init_dog - initialise la variable struct chiengue
* @d: la structure chiengue
* @name: nom chiengue
* @age: age chiengue
* @owner: proprietaire chiengue
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
