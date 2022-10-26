#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: input string to be reversed
 * Description: The function Reverse a string
 * Return: nothin
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
