#include "main.h"
/**
 * _strcat - concatenates two strings
 * Return: dest
 * @dest: char variable
 * @src: char variable
 */
char *_strcat(char *dest, char *src)
{
	char *h = dest;

	while (*h)
		h++;
	while (*src)
	{
		*h = *src;
		h++;
		src++;
	}
	*h = '\0';
	return (dest);
}
