#include "main.h"
/**
 * puts_half - print half of a str
 * Return: 0
 * @str: string
 */
void puts_half(char *str)
{
	int len = 0;

	if (len % 2 != 0)
	{
		len = (len - 1) / 2;
	}
	else
	{
		len = len / 2;
		_putchar(str[len]);
	}
}
