#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
	* insert_nodeint_at_index - inserts a new node at given index
	* @head: head of linked list
	* @idx: index to put node in
	* @n: value of node to be added
	* Description: inserts a new node at given index
	* Return: listint_t
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (i < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		i++;
		current = current->next;
	}
	new->next = current->next;
	current->next = new;

	return (new);
}
