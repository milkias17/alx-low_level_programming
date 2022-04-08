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
	unsigned int a, b;
	char *newString;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	if (n > b)
		n = b;
	newString = malloc(((a + n) + 1));
	if (newString == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		newString[a] = s1[a];
	}
	for (b = 0; b != n; b++)
	{
		newString[a] = s2[b];
		a++;
	}
	newString[a] = '\0';
	return (newString);
}
