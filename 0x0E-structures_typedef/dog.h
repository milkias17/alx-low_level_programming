#ifndef MY_H
#define MY_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
	* struct dog - represents a real life dog
	* @name: name of the dog
	* @age: age of the dog in dog years
	* @owner: name of the owner of the dog
	* Description: represents a real life dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
