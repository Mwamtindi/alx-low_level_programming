#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node ata the beginning of a list_t file
 * @head: head of the list
 * @str: string to be add in the list_t file
 * Return: the new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *_neode;

	if (str == NULL)
	{
		return (NULL);
	}
	_neode = malloc(sizeof(list_t));

	if (_neode == NULL)
	{
		return (NULL);
	}
	_neode->str = strdup(str);
	if (_neode->str == NULL)
	{
		free(_neode);
		return (NULL);
	}
	_neode->next = *head;
	*head = _neode;

	return (_neode);
}
