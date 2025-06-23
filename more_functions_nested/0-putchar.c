#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');
    return (0);
}
code ~/.bash_aliases
gall() {
    if [ -z "$1" ]; then
        echo "❌ Utilisation : gall \"message de commit\""
    else
        git add . && git commit -m "0pucthar" && git push
    fi
}
source ~/.bashrc
