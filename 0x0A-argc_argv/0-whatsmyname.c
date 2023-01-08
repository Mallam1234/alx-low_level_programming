#include <stdio.h>

/**
 * main - prints number of arugments passed to program
 * @argc: array size
 * @argv: array containing elements
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)(argv);

	printf("%d\n", argc -1);

	return (0);
}
