#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to be printed
 * @n: The number of strings passed
 * @...: A variable number of strings
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	va_list countptr;
	unsigned int i;

	va_start(countptr, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(countptr, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		printf("\n");

		va_end(countptr);
}
