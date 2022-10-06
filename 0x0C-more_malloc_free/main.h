#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

void *malloc_checked(unsigned int);
char *string_nconcat(char *, char *, unsigned int);
void *_calloc(unsigned int, unsigned int);
int *array_range(int, int);
void *_realloc(void *, unsigned int, unsigned int);
int _putchar(char);

#endif

