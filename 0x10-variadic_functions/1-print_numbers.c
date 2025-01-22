#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		va_end(list);
		return;
	}

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
