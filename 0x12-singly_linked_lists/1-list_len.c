#include "lists.h"

/**
	* list_len - returns the number of elements in a linked list
	* @h: head of linked list
	* Description: returns the number of elements in a linked list
	* Return: size_t
*/
size_t list_len(const list_t *h)
{
	size_t length = 0;
	list_t current;

	if (h == NULL)
		return (length);

	current = *h;

	while (current.next != NULL)
	{
		length++;
		current = *current.next;
	}

	return (length + 1);
}
