#include "dog.h"

/**
* new_dog - nouvelle regle nouveau chien
* @name: nom chien
* @age: j'en peux plus
* @owner: tjrs la meme chose ptnnnn
* Return: accouche 
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		free(p);
		return(NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
