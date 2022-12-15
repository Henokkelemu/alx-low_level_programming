#include "main.h"

/**
 * main - Prints "_putchar"
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int i;
	char s[10] = "_putchar\n";

	for (i = 0; i < sizeof(s); i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
