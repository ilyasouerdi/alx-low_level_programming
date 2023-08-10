#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pnt;
	int i, s;

	if (min > max)
	{
		return (NULL);
	}

	s = max - min + 1;

	pnt = malloc(sizeof(int) * s);

	if (pnt == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		pnt[i] = min++;
	}
	return (pnt);
}
