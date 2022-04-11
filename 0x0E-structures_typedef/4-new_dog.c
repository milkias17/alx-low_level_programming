#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
	* _strlen - returns the length of given string + 1
	* @string: string to find the length of
	* Description: returns the length of given string + 1
	* Return: int
*/
int _strlen(char *string)
{
	if (string[0] == '\0')
		return (0);
	else
		return (1 + _strlen(string + 1));
}

/**
	* _cpy - copies second string onto first string
	* @dest: destination string
	* @src: source string
	* Description: copies second string onto first string
	* Return: void
*/
void _cpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
}


/**
	* new_dog - creates a new dob
	* @name: name of new dog
	* @age: age of new dog(ironic)
	* @owner: name of the owner of the new dog
	* Description: creates a new dob
	* Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_cp;
	char *owner_cp;
	dog_t *my_dog;

	my_dog = malloc(sizeof(struct dog));
	name_cp = malloc(sizeof(char) * _strlen(name) + 1);
	owner_cp = malloc(sizeof(char) * _strlen(owner) + 1);

	if (my_dog == NULL || name_cp == NULL || owner_cp == NULL)
	{
		free(my_dog);
		free(name_cp);
		free(owner_cp);
		return (NULL);
	}

	_cpy(name_cp, name);
	_cpy(owner_cp, owner);

	my_dog->name = name_cp;
	my_dog->age = age;
	my_dog->owner = owner_cp;

	return (my_dog);
}

