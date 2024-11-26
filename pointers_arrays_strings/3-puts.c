#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: The string to print.
 * 
 * Return: Nothing.
 */
void _puts(char *str)
{
    while (*str != '\0') /* Loop through the string */
    {
        write("%c", *str); /* Print each character */
        str++; /* Move to the next character */
    }
    
    write("\n"); /* Print a new line after the string */
}
