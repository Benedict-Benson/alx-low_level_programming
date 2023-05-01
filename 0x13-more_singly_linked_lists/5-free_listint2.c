#include "lists.h"

/**
 * free_listint2 - fn that frees a listint_t list
 * @head:  pointer to the listint_t list to be freed
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tm;

	if (head == NULL)
		return;

	while (*head)
	{
		tm = (*head)->next;
		free(*head);
		*head = tm;

	}

	*head = NULL;
}
