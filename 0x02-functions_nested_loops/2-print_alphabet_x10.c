#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * followed by a new line
*/

void print_alphabet_x10(void)
{
	char alphabet;
	int index;

	index = 0;

	while (index < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		index++;
	}
}
