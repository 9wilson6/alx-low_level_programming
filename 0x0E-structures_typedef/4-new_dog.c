#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 *  @s: string to evaluate
 *  Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer in which we copy the string
 *  @src: string to be copied
 *  Return: the pointer to dest
 */


char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}



/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 *  @owner: dog's owner
 *  Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1 = _strlen(name);
	int len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (null);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->dog = age;

	return (dog);
}
