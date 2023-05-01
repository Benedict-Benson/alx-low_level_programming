#include "lists.h"

/**
 * add_nodeint - add a new node on the head
 * @head: pointso to the node first node in list
 * @n: int to be inserted
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
