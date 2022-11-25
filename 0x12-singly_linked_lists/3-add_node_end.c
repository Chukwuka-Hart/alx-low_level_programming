#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - returns str length
 * @s: string
 * Return: str length
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - adds new node at the end
 * @head: original link list
 * @str: string to add
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}

		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new;
			return (temp);
		}
	}

	return (NULL);
}


