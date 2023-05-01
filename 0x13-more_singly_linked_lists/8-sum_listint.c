#include "lists.h"

/**
 * sum_listint - fn that returns the sum of all the data
 * @head: first node in the linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tm = head;

	while (tm)
	{
		sum += tm->n;
		tm = tm->next;

	}

	return (sum);
}

