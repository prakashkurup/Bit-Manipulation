/* * =====================================================================================
 *
 *       Filename:  count_flipped_bits.c
 *
 *    Description:  Count the number of flipped bits required to convert integer A to integer B.
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

int countFlippedBits(uint32_t a, uint32_t b)
{
  uint32_t xor = a ^ b;
  int count = 0;

  while (xor) {
    xor &= (xor - 1);
    count++;
  }

  return count;
}
