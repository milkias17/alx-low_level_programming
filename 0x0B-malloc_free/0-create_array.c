#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
	* *create_array - create an array of chars and initialize it with a specific char
	* Description: create an array of chars and initialize it with a specific char
	* Return: char
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return NULL;

	char *arr = malloc(sizeof(unsigned int) * size);
	return arr;
}
