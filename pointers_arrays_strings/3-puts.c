#include "main.h"  /* Assurez-vous que _putchar est déclaré ici */

/**
 * _puts - Affiche une chaîne de caractères suivie d'un saut de ligne sur stdout.
 * @str: La chaîne de caractères à afficher.
 */
void _puts(char *str)
{
    while (*str != '\0')  /* Tant qu'on n'est pas à la fin de la chaîne */
    {
        _putchar(*str);  /* Utiliser _putchar pour afficher chaque caractère */
        str++;  /* Passer au caractère suivant */
    }

    _putchar('\n');  /* Afficher un saut de ligne après la chaîne */
}
