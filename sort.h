#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

/* Prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void merge_sort(int *array, int size);
void merge(int *array, int *left, int leftSize, int *right, int rightSize);
