#include "lists.h"

/**
 * get_nodeint_at_index - fn that returns the nth node of
 * a listint_t linked list
 * @head: first node in linked list
 * @index: index of node to retun
 *
 * Return: if node doesnt exist ,NULL else locate it
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;

	}

	return (head);

}
