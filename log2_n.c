/*
 * =====================================================================================
 *
 *       Filename:  log2_n.c
 *
 *    Description:  Find highest bit set / Count the leading binary zeroes.
 *
 *        Version:  1.0
 *        Created:  11/07/2016 01:58:02 PM
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

int highestBitSet(uint32_t var)
{
  /* Naive method */
#if 0
  int count = 0;
  while (var) {
    var >>= 1U;
    count++;
  }
  return count;
#endif

  /* O(Log(n)) method */
  uint32_t mask[] = {0x2, 0xC, 0xF0, 0xFF00, 0xFFFF0000};
  int shift[] = {1, 2, 4, 8, 16};

  int i;
  int res = 0; // result

  for (i = 4; i>= 0; --i) {
    /* AND var with mask and check if it's non-zero */
    if (var & mask[i]) { 
      /* Right shift */
      var >>= shift[i];
      /* Add the shift result into result */
      res = res + shift[i];
    }
  }

  return res;

  /* To count the leading zeroes:
   * leading_zeroes = 31 - res;
   * */
}
