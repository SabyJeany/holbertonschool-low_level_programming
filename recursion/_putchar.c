#include <unistd.h>

/**
 * _putchar - écrit un caractère dans stdout
 * @c: le caractère à afficher
 * Return: 1 si succès, -1 sinon
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
