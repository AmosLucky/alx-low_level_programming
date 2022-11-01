#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination char array
 * @src: source char array
 * @n: count of char to be copied
 * Description: function that copies memory area.
 * Return: char (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
