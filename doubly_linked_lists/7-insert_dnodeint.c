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
	dlistint_t *copyh, *temp;

	copyh = malloc(sizeof(dlistint_t));
	if (copyh == NULL)
		return (NULL);
	copyh->n = n;
	copyh->prev = NULL;
	copyh->next = NULL;
	temp = *h;
	if ((idx == 0))
	{
		return (add_dnodeint(h, n));
	}
	while (index < idx)
	{
		index++;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	copyh->prev = temp;
	copyh->next = temp->next;
	temp->next->prev = copyh;
	temp->next = copyh;

	return (copyh);
}
