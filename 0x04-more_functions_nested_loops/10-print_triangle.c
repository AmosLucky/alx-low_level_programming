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
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
