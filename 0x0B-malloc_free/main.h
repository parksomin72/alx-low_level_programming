#ifndef _MAIN_H_
#define _MAIN_H_
/****standr lbararies ****/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/***Functions Prototypes*****/
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int _putchar(char c);

#endif /* MAIN_H */
