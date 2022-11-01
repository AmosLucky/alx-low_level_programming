#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: input char
 * @b: char to replace with
 * @n: height count of substing
 * Description:  fills memory with a constant byte
 * Return: char (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
