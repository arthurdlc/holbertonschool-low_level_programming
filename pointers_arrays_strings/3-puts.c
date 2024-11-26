#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to print
 * Return: void
**/
void _puts(char *str)
{
    while (*str != '\0')  /* Tant qu'on n'atteint pas la fin de la chaîne */
    {
        _putchar(*str);   /* Affiche chaque caractère de la chaîne */
        str++;            /* Passe au caractère suivant */
    }

    _putchar('\n'); /* Affiche une nouvelle ligne après la chaîne */
}
