#include "lists.h"
#include <stdio.h>

/**
	* print_list - prints all elements of a linked list
	* @h: head of linked list
	* Description: prints all elements of a linked list
	* Return: size_t
*/
size_t print_list(const list_t *h)
{
	list_t current;
	size_t length = 0;

	if (h == NULL)
		return (length);

	current = *h;

	while (current.next != NULL)
	{
		if (current.str == NULL)
		{
			printf("[%i] %s\n", 0, "(nil)");
			current = *current.next;
			length++;
			continue;
		}
		printf("[%i] %s\n", current.len, current.str);
		length++;
		current = *current.next;
	}

	if (current.str == NULL)
	{
		printf("[%i] %s\n", 0, "(nil)");
		length++;
	}
	else
	{
		printf("[%i] %s\n", current.len, current.str);
	}

	return (length + 1);
}

