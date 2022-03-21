/**
 * @file bubbles_sort.c
 * @author Tenishev Ramil
 * @brief 
 * @version 0.1
 * @date 15-03-2022
 * 
 */

#include <stdio.h>
#include "bubbles_sort.h"


/**
 * @brief Sort the array with size elements using
 * bubbles method 
 * 
 * @param array pointer to an array
 * @param size size of an array
 */
void BubblesSort(int *array, size_t size) {
  
  if (1 == size) {
    return;
  }

  for (size_t i = 0; i < size; ++i) {
    for (size_t j = 0; j < size-1; ++j) {
      if (array[j] > array[j+1]) {
        int tmp = array[j];
        array[j] = array[j+1];
        array[j+1] = tmp;
      }
    }
  }

  return;
}