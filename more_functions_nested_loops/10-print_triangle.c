#include <stdio.h>
#include "main.h"

/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 * Return: On succes 1.
 * on error, -1 is returned, and errno is set appropriately
 */

void print_triangle(int size)
{
	int row;
	int column;
	int hash;

	if (size <= 0)
	{

		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= (size - row); column++)
			{
				_putchar(' ');
			}

			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
