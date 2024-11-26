#include "main.h"

/**
 * returns the length of a string
 * @str: the string to be measured
 * Return: the length of the string
 * 
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}