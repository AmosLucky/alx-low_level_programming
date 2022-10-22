#include "main.h"

/**
 * print_diagonal - prints a diagonal line in terminal
 *
 * @n input number
 *
 * Return: nothing
 **/
void print_diagonal(int n)
{
	int x, y;
	for(y = 1; y <= n; y++)
	{
		for(x = 1; x < y; x++)
			_putchar(' ');
		_putchar('\\');
	}
	if(n < 1)
		_putchar('\n');
}
