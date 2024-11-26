#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to print
 * Return: void
 **/
void _puts(char *str)
{
    /* Parcours de la chaîne jusqu'à atteindre le caractère null ('\0') */
    while (*str != '\0')
    {
        _putchar(*str);  /* Affiche chaque caractère de la chaîne */
        str++;           /* Passe au caractère suivant */
    }

    _putchar('\n'); /* Affiche une nouvelle ligne après la chaîne */
}
