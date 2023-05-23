#include "main.h"
/**
 * _islower - checks if c is a lowercase letter
 *
 *@c: character being tested
 * Return: 1 (success) 0 (fail)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
