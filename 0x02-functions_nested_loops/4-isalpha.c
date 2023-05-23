#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: if it is uppercase or lowercase
 * Return: 1 (success). 0 (fail).
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
