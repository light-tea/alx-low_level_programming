#include "holberton.h"
#include <stdio.h>

/**
 * main - function that checks for a digit 
 *
 * return: Always 0
 */

int_isdigit(int c){

	int c;

	if ( c >= '0' && c>= '9' )
{
	return (1);
}
	else
{
	return (0);
}
}
