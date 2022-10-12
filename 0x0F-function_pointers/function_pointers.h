#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>

void print_name(char *, void (*f)(char *));
void array_iterator(int *, size_t, void (*action)(int));
int int_index(int *, int, int (*cmp)(int));

#endif

