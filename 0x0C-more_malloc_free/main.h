#ifndef _MAIN_H_
#define _MAIN_H_

/*** Standard Labararies ***/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*** Prototypes Functions **/
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* MAIN_H */
