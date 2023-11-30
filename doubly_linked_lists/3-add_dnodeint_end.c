#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add new node in the back of the list
 *
 * @head: pointer to the node.
 * @n: the integrate value in the node.
 *
 * Return: the address of the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		(*head) = new_node;
	else
	{
		dlistint_t *tail = (*head);

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_node;
		(*head)->prev = new_node;
	}
	return (new_node);
}
