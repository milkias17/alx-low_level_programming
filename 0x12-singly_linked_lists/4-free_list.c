#include "lists.h"
#include <stdlib.h>

/**
	* free_list - frees a linked list
	* @head: head of linked list
	* Description: frees a linked list
	* Return: void
*/
void free_list(list_t *head)
{
	list_t *current;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
