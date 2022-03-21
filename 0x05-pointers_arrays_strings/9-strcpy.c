#include "main.h"

/**
	* _strcpy - copies a string and puts it into another string
	* Description: copies a string and puts it into another string
	* Return: char
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		*(dest + i) = *(src + i);
		i++;
	} while(*(src + i) != '\0');

	return dest;
}
