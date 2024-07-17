#ifndef INC_0X1E_SEARCH_ALGORITHMS_SEARCH_ALGOS_H
#define INC_0X1E_SEARCH_ALGORITHMS_SEARCH_ALGOS_H

#include <stdio.h>
int linear_search(int *array, size_t size, int value);
void print_interval(int *array, int start, int end);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
