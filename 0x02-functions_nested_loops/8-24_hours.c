#include "main.h"

/**
 * jack_bauer - funtion to print 24 hour clock
 *
 * hour, mins
 *
 * dividing by 10 allows rotation of second digit
 *
 * Return: time
 */

void jack_bauer(void)
{
int hour = 0;

while (hour < 24)
{
int mins = 0;

while (mins < 60)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((mins / 10) + '0');
_putchar((mins % 10) + '0');
_putchar('\n');
mins++;
}
hour++;
}
}
