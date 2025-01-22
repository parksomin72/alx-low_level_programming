#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
				|| format[i] == 's')
		{
			printf("%s", separator);
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", str);
					break;
			}
			separator = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
