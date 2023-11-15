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
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
