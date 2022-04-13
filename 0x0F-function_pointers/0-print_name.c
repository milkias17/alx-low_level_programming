#include "function_pointers.h"

/**
	* print_name - prints a name
	* @name: name to print
	* @f: a pointer to a function that prints a name
	* Description: prints a name
	* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
