#include "lists.h"

/**
	* add_nodeint_end - adds a new node at the end of linked list
	* @head: head of linked list
	* @n: value of the new node
	* Description: adds a new node at the end of linked list
	* Return: listint_t
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	current = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;

	return (new);
}
