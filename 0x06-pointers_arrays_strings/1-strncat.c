#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @dest: First string params
 * @src: Second string params
 * Description:  concatenates two strings.
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n > j)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
