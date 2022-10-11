#include"dog.h"
#include <stdlib.h>

/**
 * _strlen - finds length of string
 * @str: string
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcpy - Copies a string
 * @dest: destination
 * @src: source
 * Return: pointer to dest
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
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: New dog, Null if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *simba;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	simba = malloc(sizeof(dog_t));
	if (simba == NULL)
		return (NULL);
	simba->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (simba->name == NULL)
	{
		free(simba);
		return (NULL);
	}

	simba->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (simba->owner == NULL)
	{
		free(simba);
		return (NULL);
	}

	simba->name = _strcpy(simba->name, name);
	simba->age = age;
	simba->owner = _strcpy(simba->owner, owner);

	return (simba);
}
