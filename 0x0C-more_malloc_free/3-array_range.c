#include "main.h"
#include <stdlib.h>

/**
	* array_range - creates an array of integers
	* @min: start of range
	* @max: end of range
	* Description: creates an array of integers
	* Return: int
*/
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	while (i < ((max - min) + 1))
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}
