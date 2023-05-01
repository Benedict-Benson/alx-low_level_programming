#include "lists.h"

/**
 * add_nodeint_end - add a node on the end of the list
 * @head: points to the lass node
 * @n: data to add
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *i = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = NULL;
		return (new);
	}

	while (i->next)
		i = i->next;
	i->next = new;

	return (new);
}
