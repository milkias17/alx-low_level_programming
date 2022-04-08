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

	return (length);
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
	unsigned int length_s1 = _strlen(s1);
	unsigned int length_s2 = _strlen(s2);
	char *str;
	unsigned int i = 0;
	unsigned int buffer;

	if (n >= length_s2)
		buffer = length_s2;
	else
		 buffer = n;
	str = malloc(length_s1 + buffer + 1);

	if (str != NULL)
	{
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";

		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}

		while ((i - length_s1) < buffer)
		{
			str[i] = s2[i - length_s1];
			i++;
		}
		str[i] = '\0';
	}
	else
		return (NULL);

	return (str);
}
