#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *str, *separator = "";

	va_start(list, format);

	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(list, int));
				break;
			case 'f':
				printf("%s%.2f", separator, va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
				{
					printf("%s(nil)", separator);
				}
				else
				{
					printf("%s%s", separator, str);
				}
				break;
			default:
				break;
		}
		separator = ", ";
		i++;
	}

	va_end(list);
	printf("\n");
}
