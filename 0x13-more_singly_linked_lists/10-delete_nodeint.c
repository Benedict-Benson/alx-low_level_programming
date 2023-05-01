#include "lists.h"

/**
 * delete_nodeint_at_index - fn that deletes the node at index
 * @head: pointer to first node in list
 * @index: index of node to edelete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tm = *head;
	listint_t *cv = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tm);
		return (1);
	}

	while (a < index - 1)
	{
		if (!tm || !(tm->next))
			return (-1);

		tm = tm->next;
		a++;
	}

	cv = tm->next;
	tm->next = cv->next;
	free(cv);

	return (1);
}
