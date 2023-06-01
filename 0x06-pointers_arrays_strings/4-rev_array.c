#include "main.h"
/**
 * reverse_array - reverses integer array
 * @a: pointer
 * @n: integer
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int s;
	int t;

	for (s = 0; s < n--; s++)
	{
		t = a[s];
		a[s] = a[n];
		a[n] = t;
	}
}

