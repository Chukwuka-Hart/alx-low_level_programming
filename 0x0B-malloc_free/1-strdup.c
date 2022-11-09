#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to newly allocated space
 * 		in memory, which contains a copy of the string
 * 		as a parameter
 *
 * @str: string to copy
 *
 * Return: NULL - if str is null or space is insufficient
 * 		otherwise - a pointer to dupli string
 */

char *_strdup(char *str)
{
	char *replica;
	int len = 0;
	int x;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
	{
		x++;
	}

	replica = malloc((sizeof(char) * len) + 1);

	if (replica == NULL)
		return (NULL);
	
	for (len = 0; str[len]; len++)
	{
		replica[len] = str[len];
	}

	replica[x] = '\0';

	return (replica);
}
