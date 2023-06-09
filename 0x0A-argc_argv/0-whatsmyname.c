#include <stdio.h>
#include "main.h"

/**
 * main - print its name
 * @argc: char
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
