#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *
 * Return: Always 0
 */
void maore_numbers(void)
{
	int i = 0; int j;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j+'0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
