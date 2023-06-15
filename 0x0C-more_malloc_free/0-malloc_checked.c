#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: int
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
