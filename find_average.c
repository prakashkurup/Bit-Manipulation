/*
 * =====================================================================================
 *
 *       Filename:  find_average.c
 *
 *    Description:  Compute average using bitwise operation.
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
#include <stdint.h>

int average(int a, int b)
{
  /* This works if both a and b are odd numbers by 
   * adding 1 */
  return ((a >> 1) + (b >> 1)) + ((a & 1) & (b & 1));
}
