#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return the node of indexth position.
 *
 * @head: the input list.
 * @index: the position of the required node.
 *
 * Return: the address of the node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int index2 = 0;

	while (head != NULL)
	{
		if (index2 == index)
		{
			return (head);
		}
		index2++;
		head = head->next;
	}
	return (NULL);
}
