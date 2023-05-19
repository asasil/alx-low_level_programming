#include <stdio.h>
/**
 * main - reverse prints the alphabets
 *
 * Return: Always 0(success)
 *
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	return (0);
}
