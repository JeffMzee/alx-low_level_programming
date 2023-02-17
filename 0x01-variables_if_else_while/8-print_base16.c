#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char hexaNum;
	char hexaChar;

	for (hexaNum = 48; hexaNum < 58; hexaNum++)
	{
		putchar(hexaNum);
	}

	for (hexaChar = 'a'; hexaChar <= 'f'; hexaChar++)
	{
		putchar(hexaChar);
	}

	putchar('\n');
	return (0);
}
