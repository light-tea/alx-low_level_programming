#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the number of memory blocks to be created.
 * @size: the size of each block.
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memarray;
	char *zeroing;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memarray = malloc(size * nmemb);
	if (memarray == NULL)
		return (NULL);

	zeroing = memarray;

	for (i = 0; i < (size * nmemb); i++)
		zeroing[i] = '\0';

	return (memarray);
}
