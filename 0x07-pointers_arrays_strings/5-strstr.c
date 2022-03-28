#include "main.h"

/**
	* _strstr - finds the first occurrence of the substring in string
	* @haystack: string to find substring in
	* @needle: substrint to find in haystack
	* Description: finds the first occurrence of the substring in string
	* Return: char
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		int j = 0;
		int first_pos;
		int completed = 1;

		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				if (j == 0)
				{
					first_pos = i + j;
				}
				j++;
			}
			else
			{
				completed = 0;
				break;
			}
		}
		if (completed)
		{
			return (&haystack[first_pos]);
		}
		i++;
	}

	return (0);
}
