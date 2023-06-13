#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - returns a function
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	size_t length = strlen(str);
	char *duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);

	return (duplicate);
}

