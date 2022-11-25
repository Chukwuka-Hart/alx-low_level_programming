#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that  returns the num of elements in linked
 * @h: link list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	for (; h; c++)
		h = h->next;
	return (c);
}
