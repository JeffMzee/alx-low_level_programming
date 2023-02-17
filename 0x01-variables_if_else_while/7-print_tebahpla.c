
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char lowAlpha;

	for (lowAlpha = 'z'; lowAlpha >= 'a'; lowAlpha--)
	{
		putchar(lowAlpha);
	}
	putchar('\n');

	return (0);
}
