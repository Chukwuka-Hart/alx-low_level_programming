#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds new node to end of the list
 * @head: head of linked list
 * @n: value added to new node
 *
 * Return: address of new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlist, temp;

	newlist = malloc(sizeof(listint_t));
	if (newlist == NULL)
		return (NULL);

	newlist->n = n;
	newlist->next = NULL;

	if (*head == NULL)
	{
		*head = newlist;
		return (*head);
	}

	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		temp->next = newlist;
	}
	
	return (temp);
}
