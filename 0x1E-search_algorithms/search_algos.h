#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t r);

#endif
