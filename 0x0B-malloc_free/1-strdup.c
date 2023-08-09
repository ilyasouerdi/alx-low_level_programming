#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory s.l .
 *
 * @str: char
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	char *n;
	int i, v = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	n = malloc(sizeof(char) * (i + 1));

	if (n == NULL)
	{
		return (NULL);
	}
	for (v = 0; str[v]; v++)
	{
		n[v] = str[v];
	}
	return (n);
}
