#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add new node in the front of the list
 *
 * @head: pointer to the node.
 * @n: the integrate value in the node.
 *
 * Return: the address of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (new_node);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	*head = new_node;

	return (new_node);
}
