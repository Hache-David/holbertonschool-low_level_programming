#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of elements in list_s
 *
 *  @h: pointer in list_t.
 *
 * Return: the number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t index = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		index++;
		h = h->next;
	}
	return (index);
}
