#include <stdlib.h>
#include "lists.h"

/**
 *  free_list - free momory of list
 *  @head: pointer to the first node
 *
 *  Return nothing
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
