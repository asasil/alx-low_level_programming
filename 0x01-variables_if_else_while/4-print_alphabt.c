#include <stdio.h>
/**
 * main - Lowercase alpha excluding q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if (low != 'q' && low != 'e')
			putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}
