#include "main.h"

/**
 * print_triangle - prints a triangle according to size
 * @size:input
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int spaces;

	for (i = 0; i < size, i++)
	{
		for (spaces = size - 1 - i; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (x = 0; x <= i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	
	if (size <= 0)
	{
		_putchar('\n');
	}
}

