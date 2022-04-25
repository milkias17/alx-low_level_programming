#include "lists.h"

/**
	* listint_len - number of elements in a linked list
	* @h: head of linked list
	* Description: number of elements in a linked list
	* Return: size_t
*/
size_t listint_len(const listint_t *h)
{
	listint_t current;
	int length = 1;

	if (h == NULL)
	{
		return (0);
	}

	current = *h;

	while (current.next != NULL)
	{
		length++;
		current = *current.next;
	}

	return (length);
}
