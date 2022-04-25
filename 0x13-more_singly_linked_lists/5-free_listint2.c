#include "lists.h"

/**
	* free_listint2 - frees a linked list
	* @head: head of linked list
	* Description: frees a linked list
	* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;

	if (*head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}

	*head = NULL;
}
