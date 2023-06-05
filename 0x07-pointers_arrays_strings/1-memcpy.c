#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: location to store
 * @src: location to copy
 * @n: byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	while (a < i)
	{
		dest[a] = src[a];
		n--;
		a++;
	}
	return (dest);
}

