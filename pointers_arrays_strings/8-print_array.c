#include "main.h"
#include <studio.h>
/**
 * puts2 - prints every other character of a string
 * @str: the string to be measured
 * Return: the length of the string
 */
void print_array(int *a, int n)
{
int i;
for(i = 0; i < n; i++)
{
printf("%d", a[i]);
if(i < n - 1 )
{
printf(", ");
}
}
printf('\n');
}
