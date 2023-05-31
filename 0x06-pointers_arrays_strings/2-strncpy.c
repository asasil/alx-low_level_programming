#include "main.h"
/**
 * _strncpy - copies a string
 * Return: 0
 * @dest: char
 * @src: char
 * @n: int
 */
char *_strncpy(char *dest, char *src, int n)
{
	int h = 0;

	while (h < n && src[h] != '\0')
	{
		h++;
		dest[h] = src[h];
	}
	while (h < n)
	{
		dest[h] = '\0';
		h++;
	}
	return (dest);
}
