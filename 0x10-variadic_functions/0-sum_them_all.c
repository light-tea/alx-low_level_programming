#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum of all parameters
 * @n: numbers of arguments passed
 *
 * Return: the sum of all numbers or 0 if not return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
