#include "main.h"

/**
 * print_alphabet - check the code for ALX School students.
 * Return: Alwys 0 (Success)
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
