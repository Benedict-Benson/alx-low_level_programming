#include "lists.h"

/**
 * reverse_listint - fn that reverses a listint_t
 * @head: points to 1st node in the series
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *pre = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;

	}
	*head = pre;

	return (*head);
}
