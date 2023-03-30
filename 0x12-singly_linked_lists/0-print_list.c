#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: give the address of the list
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	size_t nod = 0;

	while (curr != NULL)
	{
		if (curr->str != NULL)
		{
			printf("[%d] %s\n", (int)strlen(curr->str), curr->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		nod++;
		curr = curr->next;
	}

	return (nod);
}
