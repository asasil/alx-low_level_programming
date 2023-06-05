#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: char
 * @needle: char
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	while (haystack != '\0')
	{
		char *m = haystack;
		char *n = needle;

		while (*m == *n && *n != '\0')
		{
			m++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
		haystack++;
	}

	return (0);
}
