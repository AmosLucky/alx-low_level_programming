#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: input string
 * @needle: needed sub string
 * Description: function that locates a substring.
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j])
			{
				if (needle[j] == haystack[i + j])
				{
					if (needle[j + 1] == '\0')
					{
						return (haystack + i);
					}
				}
				else
				{
					break;
				}
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
