#include <main.h>
#include <unistd.h>
/*
 * _putchar - writes the char c tostdout.
 * Return: success 1, error -1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
