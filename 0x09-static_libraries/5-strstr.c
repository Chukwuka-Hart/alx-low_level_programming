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
	int x = 0, s = 0;

	while (haystack[x] != '\0')
	{
		while (needle[s])
		{
			if (haystack[x] != needle[s])
				break;
			s++;
		}

		if (needle[s] == '\0')
		{
			return (haystack + x);
		}

		x++;
	}

	return (0);
}
