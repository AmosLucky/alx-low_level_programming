#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: input char array
 * @c: char to be located
 * Description: function that locates a character in a string.
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
