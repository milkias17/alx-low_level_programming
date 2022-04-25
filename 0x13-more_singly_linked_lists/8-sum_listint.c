#include "lists.h"

/**
	* sum_listint - sum of all elements of linked list
	* @head: head of linked list
	* Description: sum of all elements of linked list
	* Return: int
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
		return (sum);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
