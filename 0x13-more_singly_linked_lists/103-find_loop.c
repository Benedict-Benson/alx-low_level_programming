#include "lists.h"

/**
 * find_listint_loop - fn  that finds the loop in a linked list
 * @head: pointer to the head of the listint_t list
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tor, *cat;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tor = head->next;
	cat = (head->next)->next;

	while (cat)
	{
		if (tor == cat)
		{
			tor = head;

			while (tor != cat)
			{
				tor = tor->next;
				cat = cat->next;
			}
			return (tor);
		}

		tor = tor->next;
		cat = (cat->next)->next;
	}

	return (NULL);
}



