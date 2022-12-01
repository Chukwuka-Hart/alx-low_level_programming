#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given
 * 				position
 *
 * @head: head of list
 * @idx: index list
 * @n: int for new node
 *
 * Return: address of new node or  Null if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 1;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		if (idx > 0)
		{
			temp = *head;

			while(temp)
			{
				if (i == idx)
				{
					new->next = temp->next;
					temp->next = new;
					return (new);
				}

				temp = temp->next;
				i++;
			}

			if (idx > i)
				return (NULL);
		}

		else
		{
			new->next = *head;
			*head = new;
		}

		return (new);
	}

	return (NULL);
}
