#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: Fisrt string parameter
 * @s2: Second string parameter
 * Description: a function that compares two strings.
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (i > j)
	{
		return (1);
	}
	else if (j > i)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
