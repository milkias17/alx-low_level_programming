#include "main.h"

/**
	* _strchr - locates a character in a string
	* @s: string to find character in
	* @c: character to locate in s
	* Description: locates a character in a string
	* Return: char
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	return (0);
}
