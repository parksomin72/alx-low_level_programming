#include "main.h"
void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		 _puts_recursion(s + 1);
	}
	if (*s == '\0')
		_putchar('\n');
}
