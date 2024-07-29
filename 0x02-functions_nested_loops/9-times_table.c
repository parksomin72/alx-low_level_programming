#include "main.h"
/**
 * times_table -  function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int a = 0;

	for (; a < 10; a++)
	{
		int b = 0;

		while (b < 10)
		{
			int res = a * b;

			printf("%d", res);
			if (b != 9)
			{
				if (res >= 10)
					printf(", ");
				else if (res < 10)
					printf(",  ");
			}
			b++;
		}
		printf("\n");
	}
}
