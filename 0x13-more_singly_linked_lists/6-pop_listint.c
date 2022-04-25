#include "lists.h"

/**
	* pop_listint - deletes the head of a linked list
	* @head: head of linked list
	* Description: deletes the head of a linked list
	* Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *h;
	int data;

	if (*head == NULL)
		return (0);

	h = *head;
	*head = (*head)->next;
	data = h->n;
	free(h);
	return (data);
}
