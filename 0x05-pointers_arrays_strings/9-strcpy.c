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
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
