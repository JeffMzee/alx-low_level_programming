#include <stdio.h>

/**
 * main - print name of the executable file
 * @argc: arg count
 * @argv: array
 * Return: Always 0 -> (Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
