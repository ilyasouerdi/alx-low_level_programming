#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - fonction that get the sum of all
 * @n : number of arg
 * @ ... : variable num of args
 *
 * return : if n==0 : 0
 *     else return sum
 */
int sum_them_all(unsigned int n, ...)
{
	va_list countptr;
	unsigned int i, sum = 0;

	va_start(countptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(countptr, int);

	va_end(countptr);
	return (sum);
}
