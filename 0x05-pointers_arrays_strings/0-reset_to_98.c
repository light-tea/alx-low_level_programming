#include "holberton.h"

/**
 * main - A function that takes pointer and updates value to 98.
 *
 * Return: Always 0.
 */

void reset_to_98(int *n){
	
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("The value of pointer is : %d", p);
	return (0);
}
