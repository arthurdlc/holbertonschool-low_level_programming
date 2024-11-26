#include "main.h"

/**
 * reset_to_98 - Updates the value pointed to by the pointer to 98.
 * @ptr1: Pointer to an integer to swap with ptr2.
 * @ptr2: Pointer to an integer to swap with ptr1.
 */

void swap_numbers(int *ptr1, int *ptr2) {
  int temp;
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}