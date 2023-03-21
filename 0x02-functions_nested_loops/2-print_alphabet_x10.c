#include "main.h"

/**
 * print_alphabet_x10 - prints the alpha 10 times
 */
void print_alphabet_x10(void)
{
	int xt;
	char la;

	for (xt = 0; xt <= 9; xt++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putcha(la);

		_putchar('\n');
	}
}
