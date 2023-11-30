#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the correct node in index position.
 *
 * @index: the position of deletion.
 * @head: the list of node.
 *
 * Return: 1 if success , -1 if error.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copyh, *temp;
	unsigned int index2 = 1;

	copyh = malloc(sizeof(dlistint_t));

	if (copyh == NULL)
	{
		return (-1);
	}

	copyh->next = NULL;
	copyh->prev = NULL;
	temp = *head;

	if (*head == NULL)
		return (1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (index2 < index)
	{
		index2++;
		temp = temp->next;
	}
	copyh = temp->next;
	copyh->next->prev = copyh->prev;
	temp->next = copyh->next;
	return (1);
}
