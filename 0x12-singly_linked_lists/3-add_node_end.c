#include "lists.h"
#include <stdio.h>


/**
	* _str_len - returns the length of a string
	* @str: string to find the length of
	* Description: returns the length of a string
	* Return: int
*/
int _str_len(const char *str)
{
	int length = 0;

	if (str == NULL)
		return (length);

	while (*(str + length) != '\0')
		length++;

	return (length);
}

/**
	* add_node_end - add a new node at the end of a linked list
	* @head: head of linked list
	* @str: value of new node
	* Description: add a new node at the end of a linked list
	* Return: list_t
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _str_len(str);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new;

	return (new);
}
