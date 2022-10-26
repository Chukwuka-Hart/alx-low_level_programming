#include "main.h"

/**
 * _atoi - a function that converts a string to an int
 *
 * @s: string converted
 *
 * Return: the value
 */

int _atoi(char *s)
{
	int sum 0;
	int sign = 0;
	int d;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == '-')
		{
			sign++;
		}
		if (s[d] > 47 && s[d] < 58)
		{
			while (s[d] > 47 && s[d] < 58)
			sum = sum * 10 - (s[d++] - 48);
			break;
		}

	}
	return (sum * sign);
}
