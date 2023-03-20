#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: the length e.
 */
int _strlen(char *s)
{
	int e;

	e = 0;

	while (s[e] != '\0')
	{
		e++;
	}

	return (e);
}


/**
* _strcpy - copies the string
* @dest: pointer to the buffer
* @src: string to be copied
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int leng, e;

	leng = 0;
	while (src[leng] != '\0')
	{
		leng++;
	}
	for (e = 0; e < leng; e++)
	{
		dest[e] = src[e];
	}
	dest[e] = '\0';
	return (dest);
}


/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int leng1, leng2;

	leng1 = _strlen(name);
	leng2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (leng1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (leng2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
