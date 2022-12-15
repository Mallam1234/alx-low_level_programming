#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from input
 *       in other separated by a
 * @cn: the nunber to begin output
 * Return: 0
 *
 */
void print_to_98(int cn)
{
	if (cn >= 98)
	{
		while (cn > 98)
		printf("%d, ", cn--);
		printf("%d\n", cn);
	}
	else
	{
		while (cn < 98)
		printf("%d, ", cn++);
		printf("%d\n", cn);
	}
}
