#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

size_t listint_loop(const listint_t *head);

/**
 * listint_loop - gives number of  nodes for the looped in the list
 * @head: pointer to the head of the listint_t list
 * Return: 0 If the list is not looped Otherwise,
 *          the number of nodes in the list id returned.
 */
size_t listint_loop(const listint_t *head)
{
	const listint_t *beko, *sung;
	size_t nod = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	beko = head->next;
	sung = (head->next)->next;

	while (sung)
	{
		if (beko == sung)
		{
			beko = head;
			while (beko != sung)
			{
				nod++;
				beko = beko->next;
				sung = sung->next;
			}

			beko = beko->next;
			while (beko != sung)
			{
				nod++;
				beko = beko->next;
			}

			return (nod);
		}

		beko = beko->next;
		sung = (sung->next)->next;
	}

	return (0);
}
/**
 * free_listint_safe - fxn that frees a listint_t list
 * @h:pointer to the listint_t list
 * Return: size of the list that was free'd.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *pet;
	size_t nod, inx;

	nod = listint_loop(*h);

	if (nod == 0)
	{
		for (; h != NULL && *h != NULL; nod++)
		{
			pet = (*h)->next;
			free(*h);
			*h = pet;
		}
	}

	else
	{
		for (inx = 0; inx < nod; inx++)
		{
			pet = (*h)->next;
			free(*h);
			*h = pet;
		}

		*h = NULL;
	}

	h = NULL;

	return (nod);
}
