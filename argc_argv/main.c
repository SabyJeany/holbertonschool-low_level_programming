#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name (including the path if any)
 * @argc: argument count (unused)
 * @argv: argument vector (array of strings)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
