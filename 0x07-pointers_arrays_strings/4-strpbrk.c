#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int a = 0;

		while (*s)
		{
			while (accept[a])
			{
			if (*s == accept[a])
			return (s);
			a++;
			}
		s++;
		}

	return ('\0');
}

