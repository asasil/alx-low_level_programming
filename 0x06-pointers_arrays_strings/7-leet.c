#include "main.h"
/**
 * leet - encode a number
 * @n: value
 * Return: value (n)
 */
char *leet(char *n)
{
	int a, b;
	char st[] = "aAeEoOtTlL";
	char sec[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == st[b])
			{
				n[a] = sec[b];
			}
		}
	}
	return (n);
}

