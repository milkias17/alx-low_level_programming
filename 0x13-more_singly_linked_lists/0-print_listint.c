#include "lists.h"

/**
	* print_listint - prints all elements of a linked list
	* @h: head of linked list
	* Description: prints all elements of a linked list
	* Return: size_t
*/
size_t print_listint(const listint_t *h)
{
	listint_t current;
	size_t length = 1;

	if (h == NULL)
		return (0);

	current = *h;

	while (current.next != NULL)
	{
		length++;
		printf("%i\n", current.n);
		current = *current.next;
	}

	printf("%i\n", current.n);

	return (length);
}
