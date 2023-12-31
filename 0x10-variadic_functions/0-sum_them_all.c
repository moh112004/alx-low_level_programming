#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The amount of the arguments
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	unsigned int a;
	int b = 0;

	if (n == 0)
		return (0);
	va_start(v, n);
	for (a = 0; a < n; a++)
		b += va_arg(v, int);
	va_end(v);
	return (b);
}
