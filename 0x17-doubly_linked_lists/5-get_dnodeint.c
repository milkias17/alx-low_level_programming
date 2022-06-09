#include "lists.h"

/**
	* get_dnodeint_at_index - get the nth node of dlist
	* Description: get the nth node of dlist
	* Return: dlistint_t
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	current = head;
	while (i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
