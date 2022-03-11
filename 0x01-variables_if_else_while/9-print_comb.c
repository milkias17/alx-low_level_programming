#include <stdio.h>

/**
	* main - default description
	* Description: default description
	* Return: 0
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i++ + '0');
		if (i <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
