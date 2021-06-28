#include "holberton.h"

/**
 *swap_int - swaps the values of a and b 
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
  int x = *a;	
        *a = *b;
	*b = x;
}
