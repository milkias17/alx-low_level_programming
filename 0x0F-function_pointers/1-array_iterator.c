#include "function_pointers.h"

/**
	* array_iterator - executes a function on each element of array
	* @array: array to do action over
	* @size: size of array
	* @action: pointer to function to execute on each element of array
	* Description: executes a function on each element of array
	* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (action != NULL && array !=	NULL)
		for (; i < size; i++)
		{
			(*action)(array[i]);
		}
}
