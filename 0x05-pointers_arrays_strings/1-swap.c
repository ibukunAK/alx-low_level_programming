#include <stdio.h>
#include "main.h"

/**
 * swap_int - functions that swaps the values of two integers
 * @a: integer to swap with b
 * @b: integer to swap with a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
