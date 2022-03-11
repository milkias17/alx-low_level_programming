#include <stdio.h>

/**
	* print - default description
	* @n: number
	* Description: default description
	* Return: 0
*/

void print(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	putchar(n % 10 + '0');
}

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
		print(i++);
	}
	putchar('\n');
	return (0);
}
