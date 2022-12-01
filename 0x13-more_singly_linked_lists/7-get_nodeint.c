#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 *
 * @head: head of linked list
 * @index: index of node
 *
 * Return: NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		while (head)
		{
			if (i == index)
				return (head);

			head = head->next;
			i++;
		}
	}

	return (NULL);
}
