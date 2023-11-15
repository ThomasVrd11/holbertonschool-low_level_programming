#include "dog.h"

/**
 * _strcpy - copie
 * Description: copie
 * @dest: destination
 * @src: source
 * Return: pointeur vers le string copié
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - retourne la lenght
 * Description: oe
 * @str: str
 * Return: str taille
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
* new_dog - nouvelle regle nouveau chien
* @name: nom chien
* @age: j'en peux plus
* @owner: tjrs la meme chose ptnnnn
* Return: accouche
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *patPatrouile;

	if (name == NULL || age < 0 || owner == NULL)
	return (NULL);

	patPatrouile = malloc(sizeof(dog_t));
	if (patPatrouile == NULL)
	{
		free(patPatrouile);
		return (NULL);
	}
	patPatrouile->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (patPatrouile->name == NULL)
	{
		free(patPatrouile->name);
		free(patPatrouile);
		return (NULL);
	}
	patPatrouile->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (patPatrouile->owner == NULL)
	{
		free(patPatrouile->name);
		free(patPatrouile->owner);
		free(patPatrouile);
		return (NULL);
	}

	patPatrouile->name = _strcpy(patPatrouile->name, name);
	patPatrouile->age = age;
	patPatrouile->owner = _strcpy(patPatrouile->owner, owner);

	return (patPatrouile);
}
