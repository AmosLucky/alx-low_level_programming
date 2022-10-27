#include "main.h"

/**
 * _strncpy -  function that copies a string.
 * @dest: destination string
 * @src: input string 
 * @n: number of string to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
