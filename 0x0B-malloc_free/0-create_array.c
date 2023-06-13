#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates array of char
 * @size: size in byte
 * @c: character
 * Return: 0
 */

#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

