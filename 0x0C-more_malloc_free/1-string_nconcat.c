#include "main.h"

/**
	* _strlen - return the length of provided string
	* @s: string to get the length of
	* Description: return the length of provided string
	* Return: int
*/

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length))
		length++;

	return (length + 1);
}

/**
	* string_nconcat - concatenates two strings
	* @s1: first string to copy
	* @s2: second string to copy
	* @n: number of bytes to copy from second string
	* Description: concatenates two strings
	* Return: int
*/


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length_s1 = _strlen(s1);
	char *s3 = malloc(length_s1 + n);
	int i = 0;

	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	return (s3);
}
