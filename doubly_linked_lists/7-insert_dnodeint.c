#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *copyh;
	dlistint_t *temp;

	copyh = malloc(sizeof(dlistint_t));
	copyh->n = n;
	copyh->prev = NULL;
	copyh->next = NULL;
	temp = *h;

	while(temp != NULL)
	{
		if ((idx - 1) == index)
		{
			copyh->next = temp->next;
			temp->next = copyh;
		}
		if ((idx + 1) == index)
		{
			copyh->prev = temp->prev;
			temp->prev = copyh;
		}
		index++;
		temp = temp->next;
	}
	return (copyh);
}
