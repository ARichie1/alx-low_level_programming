#include "main.h"

/**
 * print_alphabet - check the code for ALX School students.
 * Return: Alwys 0 (Success)
 */

void print_alphabet_x10(void)
{
	int b = 0;

	while (b < 10)
	{
		char a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
