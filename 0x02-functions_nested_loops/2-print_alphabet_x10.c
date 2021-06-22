#include "holberton.h"

/**
 * print_alphabet_x10 - to print the alphabet x10
 */
void print_alphabet_x10(void)
{

	int count;

	char alp;

	for (count = 0; count <= 9; count++)
{
	for (alp = 'a'; alp <= 'z'; alp++)
{
	_putchar(alp);
}
	_putchar('\n');
}
}
