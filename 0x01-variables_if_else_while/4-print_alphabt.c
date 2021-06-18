#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters, except for e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char tea;

		for (tea = 'a'; tea <= 'z'; tea++)
		{
		if (tea != 'e' && tea != 'q')
		putchar(tea);
		}
		putchar('\n');

	return (0);
}
