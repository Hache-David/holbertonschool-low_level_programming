#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node in the idx position.
 *
 * @idx: the position where you want add the new node.
 * @n: the data on the new node.
 * @h: the input list of node.
 *
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *copyh;
	dlistint_t *temp;

	copyh = malloc(sizeof(dlistint_t));

	if (copyh == NULL)
		return (NULL);

	copyh->n = n;
	copyh->prev = NULL;
	copyh->next = NULL;
	temp = *h;

	if (idx == 0)
	{
		copyh = *h;
		return (copyh);
	}
	while (index <= (idx + 1))
	{
		if (temp->next == NULL)
		{
			return (NULL);
		}
		if ((idx - 1) == index)
		{
			copyh->next = temp->next;
			temp->next = copyh;
		}
		if ((idx + 1) == index)
		{
			copyh->prev = temp->prev;
			temp->prev = copyh;
			return (copyh);
		}
		index++;
		temp = temp->next;
	}
	return (NULL);
}
