/*
 * =====================================================================================
 *
 *       Filename:  missing_number.c
 *
 *    Description:  Find missing number in a sorted array of numbers.
 *
 *        Version:  1.0
 *        Created:  11/03/2016 11:14:24 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Prakash Kurup (pk), prakashkurup7@gmail.com
 *        Company:  NONE
 *
 * =====================================================================================
 */

#include <stdio.h>

int missingNumber(int *arr, int size)
{
  int i;

  /* XOR all the array elements */
  int set1 = arr[0];
  for (i = 1; i < size; i++) {
    set1 ^= arr[i];
  }

  /* XOR the number of elements including the missing number space (size + 1) */
  int set2 = 1;
  for (i = 2; i <= size + 1; i++) {
    set2 ^= i;
  }

  /* XOR both to get missing number */
  return set1 ^ set2;
}
