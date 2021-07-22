#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

typedef struct format_handler
{
	char format;
	void (*printer)(va_list *args_list);
} fh;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);

#endif
