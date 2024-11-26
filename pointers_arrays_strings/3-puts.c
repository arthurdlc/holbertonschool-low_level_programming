#include "main.h"

void _puts(char *str)
{
    while (*str != '\0')
    {
        _putchar(*str);  /* Affiche chaque caractère de la chaîne */
        str++;           /* Avance au caractère suivant */
    }

    _putchar('\n'); /* Affiche un saut de ligne à la fin */
}
