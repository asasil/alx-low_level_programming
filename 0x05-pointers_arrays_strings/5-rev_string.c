#include "main.h"
/**
 * rev_string - reverses string
 * Return: 0
 * @s: char
 */
void rev_string(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
