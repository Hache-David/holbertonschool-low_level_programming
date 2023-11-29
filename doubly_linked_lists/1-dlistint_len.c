#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - just count the number of node
 *
 * @h: the first node of the list.
 *
 * Return: index the number of node in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t index = 0;

	if (h == NULL)
	{
		return (index);
	}
	while (h->next)
	{
		index++;
		h = h->next;
	}
	index++;
	return (index);
}
