#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
alias gpush='git add . && git commit -m "5print" && git push'
alias gs='git status'
alias ga='git add .'
alias gc='git commit -m'
nano ~/.bashrc
alias gall='f(4print){ git add . && git commit -m "4print" && git push; }; f'
alias crun='f(5-print_nombers.c){ gcc -Wall -Wextra -o prog "$1" && ./prog; }; f'
