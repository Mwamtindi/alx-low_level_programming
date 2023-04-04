#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

size_t _listint_loop(const listint_t *head);

/**
 * _listint_loop - gives number of  nodes for the looped in the list
 * @head: A pointer to the head of the listint_t list
 * Return: 0 If the list is not looped Otherwise,
 *          the number of nodes in the list id returned.
 */
size_t _listint_loop(const listint_t *head)
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
 * print_listint_safe - fxn that prints a listint_t linked list
 * @head: pointer to the head of listint_t linked list
 * Return: number of nodes in the linked list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nod, inx = 0;

	nod = _listint_loop(head);

	if (nod == 0)
	{
		for (; head != NULL; nod++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (inx = 0; inx < nod; inx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nod);
}
