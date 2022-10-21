#include "main.h"
/**
 *_isupper - Have a _isupper function, used to check if char is upper
 *@c: caracter recibo por main.
 *Return: 0 if char is not upper and 1 if char is upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
