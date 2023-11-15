#include "dog.h"

/**
 * free_dog - super simple lets gooo
 * @d: j'en ai marre'
 */

void free_dog(dog_t *d)
{
	if (d == 0)
	return;

	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
