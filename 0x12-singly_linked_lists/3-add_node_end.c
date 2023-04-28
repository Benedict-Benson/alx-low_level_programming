#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: points to a pointer in the node
 * @str: strng to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *a;
	list_t *new, *last;

	int len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	a = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = a;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;

		return (new);
	}

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new;

	}
	return (*head);
}
