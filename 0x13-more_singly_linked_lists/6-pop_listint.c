#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *		and returns the head node's data
 *
 * @head: pointer to listint_t
 *
 * Return: 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *newhead;
	int n = 0;

	if (*head == NULL)
		return (0);

	newhead = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = newhead;

	return (n);
}
