#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node ata the beginning of a list_t file
 * @head: head of the list
 * @str: string to be add
 * Return: the new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *_newnode;

	if (str == NULL)
	{
		return (NULL);
	}
	_newnode = malloc(sizeof(list_t));

	if (_newnode == NULL)
	{
		return (NULL);
	}
	_newnode->str = strdup(str);
	if (_newnode->str == NULL)
	{
		free(_newnode);
		return (NULL);
	}
	_newnode->next = *head;
	*head = _newnode;

	return (_newnode);
}
