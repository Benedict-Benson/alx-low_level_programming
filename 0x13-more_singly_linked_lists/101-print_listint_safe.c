#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts no of unique codes
 * @head: a pointer to the linked list to check
 *
 * Return: if the list is not looped ,0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t, *hd;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	t = head->next;
	hd = (head->next)->next;

	while (hd)
	{
		if (t == hd)
		{
			t= head;
			while (t != hd)
			{
				nodes++;
				t = t->next;
				hd = hd->next;

			}

			t = t->next;
			while (t != hd)
			{
				nodes++;
				t = t->next;
			}

			return (nodes);
		}

		t = t->next;
		hd = (hd->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - fn that prints a listint_t linked list.
 * @head: a pointer to the linked list
 *
 * Return: No of nodes in linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

