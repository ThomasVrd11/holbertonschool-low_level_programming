#include "dog.h"
#include <stdlib.h>
/**
* print_dog - print tout ce qu'il y'a a dire sur chien
* @d: pointeur sur la structure dans dogh
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name)
		printf("Nom du chiengue: %s\n", d->name);
	else
		printf("Nom du chiengue: (nil)\n");

	if (d->owner)
		printf("Proprio: %s\n", d->owner);
	else
		printf("Proprio: (nil)\n");
}
