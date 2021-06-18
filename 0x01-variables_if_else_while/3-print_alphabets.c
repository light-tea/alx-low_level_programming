#include <stdio.h>
/**
* main - printing the alphabet 
*
* Return: Always 0 (Success)
*/


int main(void)
{
	char tea;

	for (tea = 'a'; tea <= 'z'; tea++)
		putchar(tea);
	for (tea = 'A'; tea <= 'Z'; tea++)
		putchar(tea);
		putchar('\n');

	return (0);
}
