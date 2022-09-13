#include "main.h"

/**
 * print alphabets
 */

int main()

{
	int num, i;

	for (num = 0; num <= 9; num++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	return 0;
}

