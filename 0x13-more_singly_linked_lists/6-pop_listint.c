#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: points to first element in alinked list
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tm;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	tm = (*head)->next;
	free(*head);
	*head = tm;

	return (i);
}

