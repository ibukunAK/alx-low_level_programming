#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times the character
 * Return: 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
