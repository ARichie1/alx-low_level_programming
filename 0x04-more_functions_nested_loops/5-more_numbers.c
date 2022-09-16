#include "main.h"

/**
 * more_numbers - Print numbers between 0 to 14 incl.
 * Return: Void.
 */

void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
				j++;
			}
		}
		_putchar('\n');
		i++;
	}
}
