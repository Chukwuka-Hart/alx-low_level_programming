#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list
 * @head: original link list
 * @str: str to add to the node
 *
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp =  malloc(sizeof(list_t));

		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}

/**
 * _strlen - returns length of str
 * @s: string
 * Return: string length
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
