#include <stdio.h>
/**
 * main - numbers based 16
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	char ch = 'a';

	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
