#include "main.h"

/**
 * ptint_line - pient strait line between tow points
 *
 * Return: nothing
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;
		while (n > i)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
