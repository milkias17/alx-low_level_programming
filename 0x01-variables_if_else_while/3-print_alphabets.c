#include <stdio.h>
#include <ctype.h>

/**
	* main - print upper and lower case alphabet
	* Description: print upper and lower case alphabet
	* Return: 0
*/
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
		putchar(alphabet[i]);
	for (int i = 0; i < 26; i++)
		putchar(toupper(alphabet[i]));
	putchar('\n');

	return (0);
}

