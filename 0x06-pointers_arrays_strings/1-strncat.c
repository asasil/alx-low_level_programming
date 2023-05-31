#include "main.h"
/**
 * _strncat -  concatenates
 * Return: dest
 * @src: char
 * @dest: char
 * @n: bytes from src
 */
char *_strncat(char *dest, char *src, int n)
{
	char *h = dest;

	while (*h)
		h++;
	while (*src && n > 0)
	{
		*h = *src;
		h++;
		src++;
		n--;
	}
	*h = '\0';
	return (dest);
}
