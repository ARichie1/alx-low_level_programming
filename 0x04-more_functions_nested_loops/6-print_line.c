#include "main.h"

/**
 * print_line - Print line dependent on the integer n.
 * @n : The number of '_' characters to use
 * Return: Void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			if (i == n)
			{
				_putchar('_');
				_putchar('\n');
			}
			else
			{
				_putchar('_');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
