#include  "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the char array parameter
 * Description: Returns the length of a string
 * Return: interger
 */
int _strlen(char *s)
{
	int length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
