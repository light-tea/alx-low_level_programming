#include "holberton.h"
#include <stdio.h>

/** 
 * swap_int - a function that swaps values of two integers
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
	*a = *b;
	*b = swp;
}
