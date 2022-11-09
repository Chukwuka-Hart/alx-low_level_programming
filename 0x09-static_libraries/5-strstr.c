#include "main.h"

/**
 * strstr - locates a substring
 *
 * @haystack: string to search in
 * @needle: an input string to locate in 
 *
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char x, s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (x = 0; needle[x]; x++)
		{
			if (haystack[x] != needle[x])
				break;
		}

		if (x != s)
			haystack++;
		else
			return (haystack);
	}

	return (0);
}
