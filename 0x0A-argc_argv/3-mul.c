#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - product of a number
 * @argc: integer
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	return (1);
}
int p1 = atoi(argv[1]);
int p2 = atoi(argv[2]);
int product = p1 * p2;

printf("%d\n", product);
return (0);
}
