#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *temp;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(list, char *);
		if (temp == NULL)
			printf("nil");
		else
			printf("%s", temp);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
