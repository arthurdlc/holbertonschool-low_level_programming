#include "main.h"
#include <stdio.h> // Inclusion correcte de l'en-tête

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]); // Imprime un entier
if (i < n - 1) // Ajouter une virgule et un espace sauf pour le dernier élément
printf(", ");
}
printf("\n"); // Imprime une nouvelle ligne (corrigé)
}
