#include "lists.h"
#include <stdlib.h>

/**
	* free_listint - frees the memory of a linked list
	* @head: head of linked list
	* Description: frees the memory of a linked list
	* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *next;

	if (head == NULL)
		return;

	next = head->next;
	free(head);
	free_listint(next);
}
