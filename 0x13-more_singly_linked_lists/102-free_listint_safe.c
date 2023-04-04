#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint_safe - fxn that frees a listint_t list
 * @h:pointer to the listint_t list
 * Return: size of the list that was free'd.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t tally = 0;
	listint_t *curr, *pet;

	if (h == NULL)
		return (0);

	curr = *h;
	while (curr != NULL)
	{
		tally++;
		if (curr <= curr->next)
		{
			*h = NULL;
			exit(98);
		}
		pet = curr;
		curr = curr->next;
		free(pet);
	}
	*h = NULL;
	return (tally);
}
