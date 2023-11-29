#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all the element of the list
 *
 * @h: the first node of the list.
 *
 * Return: index the number of node in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t index = 0;

	if (h == NULL)
	{
		return (index);
	}
	while (h->next)
	{
		printf("%d\n", h->n);
		index++;
		h = h->next;
	}
	printf("%d\n", h->n);
	return (index);
}
