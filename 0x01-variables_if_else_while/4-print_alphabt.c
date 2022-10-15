#include <stdio.h>

/**
 *
 * main - Entrance point
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		if ((a != 'e') && (a != 'q'))
		{
			putchar(a);
		}
	}
	putchat('\n');
	return (0);
}
