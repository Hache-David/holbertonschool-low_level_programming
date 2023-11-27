#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print an element of the list create in main.h
 *
 * @h: pointer on structure list_s.
 *
 * Description: singly linked list node structure
 *
 * Return: number of the elements in the list.
 */

size_t print_list(const list_t *h)
{
	unsigned long size = 0;

	if (h == NULL)
	{
		return(0);
	}
	if (h->str == NULL)
	{
		printf("[0] %s\n", h->str);
		size++;
		h = h->next;
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}

	return (size);
}
