#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - allocates a block of memory to store concatenated strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of s2 to concatenate to s1
 *
 * Return: a pointer to allocated memory block.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_len, s2_len, size, k, i;

	s1_len = 0;
	s2_len = 0;
	k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	size = s1_len + s2_len;
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		ptr[k] = s1[i];
		k++;
	}
	for (i = 0; i < n; i++)
	{
		ptr[k] = s2[i];
		k++;
	}
	ptr[k] = '\0';

	return (ptr);
}
