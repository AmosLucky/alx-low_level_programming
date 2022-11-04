#include <stdio.h>

/**
 * main - prints all argument
 * @argc: argumrnt count
 * @argv: array of arguments
 * Description: prints all argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
}
