#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns total or sum
 * @n: int
 * @...: A variable
 *
 * Return: 0
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, total = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		total += va_arg(ap, int);

	va_end(ap);

	return (total);
}

