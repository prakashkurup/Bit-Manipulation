/*
 * =====================================================================================
 *
 *       Filename:  min_max.c
 *
 *    Description:  Find minimum and maximum of two numbers using bitwise operation.
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

void minMax(int a, int b)
{
  printf("Of the given numbers: %d and %d\n", a, b);
  int max = a ^ ((a ^ b) & -(a < b));
  int min = b ^ ((a ^ b) & -(a < b));

  printf("Minimum: %d and Maximum: %d\n", min, max);
}
