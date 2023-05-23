#include "main.h"
/**
 * print_alphabet_x10 - prints letters 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int j = 0;

	while (j < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		j++;
		ch = 'a';
	}
}
