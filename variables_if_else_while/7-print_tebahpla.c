#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}

alias cbuild='gcc -Wall -Wextra -o prog'

alias crun='f(7-print_tebahpla.c){ gcc -Wall -Wextra -o prog "$1" && ./prog; }; f'

alias cdebug='gcc -g -Wall -Wextra -o prog'
source ~/.bashrc
