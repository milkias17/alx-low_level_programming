#include "main.h"
#include <stdio.h>

/**
	* cap_string - capitalizes all words of a string
	* @sentence: sentence to get capitalized
	* Description: capitalizes all words of a string
	* Return: char
*/
char *cap_string(char *sentence)
{
	int i = 0;
	int isBeginning = 1;

	while (sentence[i] != '\0')
	{
		if (isBeginning && sentence[i] >= 'a' && sentence[i] <= 'z')
		{
			sentence[i] = sentence[i] - 32;
			isBeginning = 0;
		}
		switch (sentence[i])
		{
		case ' ':
		case ',':
		case '\t':
		case '\n':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			isBeginning = 1;
			break;
		default:
			isBeginning = 0;
		}
		i++;
	}

	return (sentence);
}
