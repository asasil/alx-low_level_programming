#include "main.h"
/**
 * _islower - function for lower case
 *
 * @c: to be printed
 *
 * Return: 1 for lower
 * and 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
