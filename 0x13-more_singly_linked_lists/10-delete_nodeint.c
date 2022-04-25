#include "lists.h"

/**
	* delete_nodeint_at_index - deletes the node at index of a linked list
	* @head: head of linked list
	* @index: index to delete at
	* Description: deletes the node at index of a linked list
	* Return: int
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;
	listint_t *deleted_node;
	int value;

	if (*head == NULL)
		return (-1);

	current = *head;

	while (index != 0 && i < index - 1)
	{
		current = current->next;
		i++;
	}
	if (current != *head)
	{
		if (current->next == NULL)
			return (-1);
		deleted_node = current->next;
		current->next = current->next->next;
		value = deleted_node->n;
		free(deleted_node);
	}
	else
	{
		if (current->next == NULL)
		{
			*head = NULL;
			value = current->n;
			free(current);
			return (value);
		}
		deleted_node = *head;
		*head = (*head)->next;
		value = deleted_node->n;
		free(deleted_node);
	}
	return (value);
}
