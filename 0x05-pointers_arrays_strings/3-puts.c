#include "main.h"
/**
 * _puts print strings in stdout
 * @str: input char params
 * Description: prints strings in stdout
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
