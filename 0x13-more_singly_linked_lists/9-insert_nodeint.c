#include "lists.h"

/**
 * insert_nodeint_at_index - fn hat inserts a new node at a given position
 * @head: points to 1st node in the list
 * @idx: index where new node is insrted
 * @n: data to insert in the node
 *
 * Return: pointer to new node, or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new;
	listint_t *tm = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (a = 0;  tm && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new->next = tm->next;
			tm->next = new;
			return (new);
		}

		else
		{
			tm = tm->next;
		}

	}

	return (NULL);
}



