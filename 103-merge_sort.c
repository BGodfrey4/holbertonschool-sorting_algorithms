#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

//Function to merge two sorted arrays
void merge(int *array, int *left, int leftSize, int *right, int rightSize){
  int i = 0;
  int j = 0;
  int k = 0;

  while(i<leftSize && j< rightSize){
    if(left[i] < right[j]){
      array[k] = left[i];
      i++;
    } else {
      array[k] = right[j];
      j++;
    }
    k++;
  }

  while(i < leftSize){
    array[k] = left[i];
    i++;
    k++;
  }

  while(j < rightSize){
    array[k] = right[j];
    j++;
    k++;
  }
}

//Function to divide array into sub arrays
void merge_sort(int *array, int size){
  int mid;
  int *left;
  int *
