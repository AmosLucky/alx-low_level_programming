#include "main.h"
#include <stdio.h>

/**
 * main - prints all argument passed
 * @argc: number of argument passed
 * @argv: array of arguments passed
 * Description: The program prints the number of args passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", (argc - 1));
	return (0);
}
