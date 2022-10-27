#include "main.h"
/**
* *_strncpy - function that compares two strings.
* @dest : output string
* @src : input string
* @n : int
* Return: char.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
