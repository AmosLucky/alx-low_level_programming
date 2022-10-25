#include "main.h"
/*
 * swap_int - Swaps the value of two integers
 *
 * @a: first integer param
 * @b: Second integer param
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int ma = *a;
	int mb = *b;
	*a = mb;
	*b = ma;
}
