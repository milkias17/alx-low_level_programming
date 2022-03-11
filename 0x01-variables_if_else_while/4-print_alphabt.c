#include <stdio.h>

/**
	* main - prints alphabet
	* Description: print alphabet
	* Return: 0
*/

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] == 'e' || alphabet[i] == 'q')
			continue;

		putchar(alphabet[i]);
	}

	putchar('\n');
	return (0);
}
