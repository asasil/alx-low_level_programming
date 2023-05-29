#include "main.h"
/**
 * swap_int - swaps the value of two ints
 * Return: 0
 * @a: int
 * @b: int
 */
void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}
