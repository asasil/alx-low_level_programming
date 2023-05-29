#include "main.h"
/**
 * puts2 - printts every other number
 * Return: 0
 * @str: string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
