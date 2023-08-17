#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers : print the numbers given
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed
 * @...: A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list countptr;
	unsigned int i;

	va_start(countptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(countptr, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(countptr);
}
