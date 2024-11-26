#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 * Return: void
 */

void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}

for (i--; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
