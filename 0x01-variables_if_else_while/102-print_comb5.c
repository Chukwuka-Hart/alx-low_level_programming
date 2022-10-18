#include <stdio.h>
#include <unistd.h>

/**
 * main 
 *
 * code
 *
 * Return: 0
 */

int main(void)
{

int d = 0;
int e;

for (d = 0; d <= 98; d++)
{
for (e = d + 1; e <= 99; e++)
{
putchar(( d / 10) + '0');
putchar((d % 10) + '0');
putchar(' ');
putchar((e / 10) + '0');
putchar((e % 10) + '0');
if (d == 98 && e == 99)
break;
putchar(',');
putchar(' ');
}    
}  
putchar('\n');
return (0);
}
