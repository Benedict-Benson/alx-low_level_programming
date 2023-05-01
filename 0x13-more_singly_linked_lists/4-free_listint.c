#include "lists.h"

/**
 * free_listint - frees lits
 * @head: listint_t to be freed
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tm;

	while (head)
	{
		tm = head->next;
		free(head);
		head = tm;

	}
}
