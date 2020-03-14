#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print all numbers ending with a newline
 * @separator: is the seperator between the arguements
 * @n: n is the number of integers passed to the function
 * if seperator is NULL dont print
 * print a newline at the end of the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list valist;

	if (separator != NULL)
	{
		va_start(valist, n);
		printf("%d", va_arg(valist, int));
		for (a = 0; a < n - 1; a++)
		{
			printf("%s ", separator);
			printf("%d", va_arg(valist, int));
		}
		printf("\n");
	}
	va_end(valist);
}
