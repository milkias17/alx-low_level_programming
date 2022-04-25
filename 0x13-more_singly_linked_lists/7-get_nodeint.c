#include "lists.h"

/**
	* get_nodeint_at_index - get the node at given index
	* @head: head of linked list
	* @index: index of node to get
	* Description: get the node at given index
	* Return: listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;
	while (i <= index && current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}

	return (NULL);
}
