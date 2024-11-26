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
	while (s[length] != '\0')
	{
		length++; /* Increment the length counter for each character */
	}

	/* Return the total length of the string */
	return (length);
}
