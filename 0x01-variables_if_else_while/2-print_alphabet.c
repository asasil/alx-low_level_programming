#include <stdio.h>
/**
 * main - Print alphabets in lower case using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
	putchar('\n');
	return (0);
}
