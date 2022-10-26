#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: input string to be reversed
 * Description: The function Reverse a string
 * Return: nothin
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	i--;
	int j = 0;
	char rev[i];

	while (i >= 0)
	{
		rev[j] = s[i];
		i--;
		j++;
	}
	
	while (j >= 0)
	{
		s[j] = rev[j];
		j--;
}
