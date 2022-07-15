#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * binary - Print a binary number
 *@va: Unsigned integer input
 *
 * Return: Number
 */
int binary(va_list va)
{
	unsigned int c;
	int  i, j;
	int arr[100];

	c = va_arg(va, int);
	i = 0;
	if (c == 0)
	{
		_putchar('0');
		return (1);
	}
	while (c > 0)
	{
		arr[i] = c % 2;
		c = c / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j] + '0');
	return (i);
}
