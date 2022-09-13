#include "main.h"
/**
 *times_table - 9 time tables
 */
void times_table(void)
{
	int num, mun, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mun = 1; mun <= 9; mun++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mun;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
