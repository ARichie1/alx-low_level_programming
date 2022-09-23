#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: first input
 * @n: number of elemets
 * Description: reverses the content of an array of integers
 * Return: always (0)
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
