#include "lists.h"

/**
	* add_nodeint - add a new node at the beginning of the linked list
	* @head: head of linked list
	* @n: value of n inside the new node to be added
	* Description: add a new node at the beginning of the linked list
	* Return: listint_t
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->n = n;

	*head = new;

	return (new);
}
