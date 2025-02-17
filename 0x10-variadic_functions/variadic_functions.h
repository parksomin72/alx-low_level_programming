#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTION_H
/****** standard labraries ******/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/****** Function prototypes ******/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
