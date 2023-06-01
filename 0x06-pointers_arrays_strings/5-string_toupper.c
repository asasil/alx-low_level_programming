#include "main.h"
/**
 * string_toupper - lowercase to uppercase
 *
 * @str: string
 * Return: str
 */
char *string_toupper(char *str)
{
	int h = 0;

	while (str[h] != '\0')
	{
		if (str[h] >= 'a' && str[h] <= 'z')
		{
			str[h] = str[h] - ('a' - 'A');
		}
		h++;
	}
	return (str);
}

