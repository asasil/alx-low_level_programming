#include "main.h"
/**
 * _strlen - lenght of a string
 * Return: len
 * @s: char value
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
