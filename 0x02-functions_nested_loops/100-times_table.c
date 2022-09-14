#include "main.h"

/**
 * print_times_table - prints timestable from n
 * @n:input
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, k, l;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 0; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				k = i * j;
				k = j * i;
				if (k <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (k <= 99 && k >= 10)
				{
					_putchar(',');
					_putchar((k / 10) + '0');
				}
				else
				{
					l = k / 10;
					_putchar((l / 10) + '0');
					_putchar((l % 10) + '0');
				}
			_putchar('\n');
		}
	}
}
