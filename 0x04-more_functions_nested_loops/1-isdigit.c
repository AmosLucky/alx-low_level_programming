#include "main.h"
/**
 *_isdigit is a function used to check for a digit 1 - 9
 *@c: caracter recibo por main.
 *Return: 1 is char c is a digit and 0 if it is not a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
