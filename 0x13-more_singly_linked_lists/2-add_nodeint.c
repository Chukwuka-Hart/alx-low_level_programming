#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at begininning of list
 * @head: head of linked list
 * @n: value of the new node
 *
 * Return: address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newlist;

	newlist = malloc(sizeof(listint_t));
	if (newlist == NULL)
		return (NULL);

	newlist->n = n;
	newlist->next = *head;
	*head = newlist;

	return (newlist);
}
