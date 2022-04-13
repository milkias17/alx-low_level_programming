#include "function_pointers.h"

/**
	* int_index - searches for an integer
	* @array: array to search for an integer
	* @size: size of given array
	* @cmp: pointer to compare function
	* Description: searches for an integer
	* Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);


	if (array != NULL && cmp !=	NULL)
		for (; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}

	return (-1);
}
