#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - fxn that finds the loop in a linked list
 * @head: pointer to the head of linked list
 * Return: NULL if there is no loop otherwise
 *         address of the node where the loop starts is returned.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *wolve = head, *staff = head;

	while (staff && staff->next)
	{
		wolve = wolve->next;
		staff = staff->next->next;

		if (wolve == staff)
		{
			wolve = head;
			while (wolve != staff)
			{
				wolve = wolve->next;
				staff = staff->next;
			}
			return (wolve);
		}
	}
	return (NULL);
}
