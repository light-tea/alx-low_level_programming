#include "holberton.h"

/**
 * main - function that checks for a digit 
 *
 * return: Always 0
 */

int_isdigit(int c){

	if ( c >= '0' && c<= '9' )
{
	return (1);
}
	else
{
	return (0);
}
}
