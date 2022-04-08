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
	char *arr;
	unsigned int j = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (; j < (nmemb * size); j++)
	{
		arr[j] = 0;
	}

	return (arr);
}
