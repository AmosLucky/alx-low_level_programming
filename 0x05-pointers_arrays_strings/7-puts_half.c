#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: input string param
 * Description: prints half of a string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i])
	{
		i++;
	}
	j = (i/2);

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
