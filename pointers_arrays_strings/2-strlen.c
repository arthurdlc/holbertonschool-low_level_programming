#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure (pointer to the first character).
 *
 * Return: The length of the string (number of characters before '\0').
 */
int _strlen(char *s)
{
    int length = 0; /* Initialize the length counter to 0 */

    /* Loop through the string until the null terminator is reached */
    for (; s[length] != '\0'; length++) /* Start from length 0, loop while character is not '\0' */
    {
        /* length is incremented in the loop header */
    }

    /* Return the total length of the string */
    return (length);
}
