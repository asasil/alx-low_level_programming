#include <stdio.h>
#include "main.h"
/**
 * main - prints argument number
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d", argc - 1);
	return (0);
}
