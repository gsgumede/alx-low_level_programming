#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

#include<stddef.h>
#include<stlib.h>

void print_name(char *name,void (*f)(char *));
int _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));

#endif

