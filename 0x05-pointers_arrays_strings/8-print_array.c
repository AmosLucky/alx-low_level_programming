#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: input char array
 * @n: numbers of item to be printed
 * Description: prints n elements of an array of integers
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
			printf('\n');
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
