#include"main.h"
/**
 * main - Positive anything is better than negative nothing
 *
 * Return: always 0 (seccuss)
 */
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	return;
}
