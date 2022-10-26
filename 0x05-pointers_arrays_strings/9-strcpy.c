#include "main.h"

/**
 * _strcpy - Write a function that copies the string pointed 
 * @dest: destination
 * @src: input to be copied
 * Description: Write a function that copies the string pointed 
 * Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i])
	{
		i++;
	}
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
