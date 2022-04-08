#include "main.h"
#include <stdlib.h>

/**
	* malloc_checked - allocates a memory using malloc.
	* @b: number of bytes to allocate
	* Description: allocates a memory using malloc.
	* Return: void
*/
void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
