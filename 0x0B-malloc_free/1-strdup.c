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
	char *duplicate;
	int length = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
