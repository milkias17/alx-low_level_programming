#include "main.h"
#include <stdlib.h>

/**
	* _calloc - allocates memory for an array
	* @nmemb: number of members in array to be created
	* @size: size of each element in array
	* Description: allocates memory for an array
	* Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(size * nmemb);

	if (size == 0 || nmemb == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
