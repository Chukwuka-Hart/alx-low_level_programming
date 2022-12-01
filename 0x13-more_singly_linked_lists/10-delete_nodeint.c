#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of linked list
 * @index: index of node deleted
 *
 * Return: 1 success, 0 failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delnode;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);

			i++;
		}

		delnode = temp;
		delnode = delnode->next;
		temp->next = delnode->next;
		free(delnode);
	}

	return (1);
}
