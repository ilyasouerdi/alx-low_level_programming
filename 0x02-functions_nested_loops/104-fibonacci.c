#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 98; count++)
	{
		sum = fib1 + fib2;
		printf("%ld", sum);
		fib1 = fib2;
		fib2 = sum;
		if (count == 98)
			printf("\n");
		else if (count < 98)
			printf(", ");
	}
	return (0);
}
