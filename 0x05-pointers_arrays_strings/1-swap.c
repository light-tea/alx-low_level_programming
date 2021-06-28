#include "holberton.h"
#include <stdio.h>

/** void swap_int - A function that swaps values of two integers
 *
 * @a: An integer to swap
 * @b: Another integer to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = b;
	*b = swp;
}
