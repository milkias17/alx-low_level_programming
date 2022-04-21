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
	* add_node - adds a new node at the beginning of a linked list
	* @head: head of linked list
	* @str: string of new node
	* Description: adds a new node at the beginning of a linked list
	* Return: address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _str_len(str);
	new->next = *head;

	*head = new;

	return (new);
}
