#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string to be added
 * Return: address of new element or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *_newnode, *curr;

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
	_newnode->next = NULL;

	if (*head == NULL)
	{
		*head = _newnode;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = _newnode;
	}
	return (_newnode);
}
