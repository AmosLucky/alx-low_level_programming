#include "main.h"
/**
 * print_triangle - prints a triangle in the terminal
 *
 * @size: Size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;
	if (size >= 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
