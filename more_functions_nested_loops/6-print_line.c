#include <stdio.h>
#include "main.h"
/**
* print_line - Draws a straight line in the terminal using the character '_'
*@n: Where n is the number of times the character _ should be printed
* If n is 0 or less, the function should only print \n
*
* you can only use _putchar function to print
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');

	}
	else
	{


		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');

	}
}
