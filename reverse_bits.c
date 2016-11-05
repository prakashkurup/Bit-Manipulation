/*
 * =====================================================================================
 *
 *       Filename:  reverse_bits.c
 *
 *    Description:  Reverse the bits of an unsigned int.
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

void reverseBits(uint32_t *var)
{
  /* Swap each bit */
  *var = ((0xAAAAAAAA & *var) >> 1) | ((0x55555555 & *var) << 1);
  /* Swap each 2 bits */
  *var = ((0xCCCCCCCC & *var) >> 2) | ((0x33333333 & *var) << 2);
  /* Swap each nibble */
  *var = ((0xF0F0F0F0 & *var) >> 4) | ((0x0F0F0F0F & *var) << 4);
  /* Swap each byte */
  *var = ((0xFF00FF00 & *var) >> 8) | ((0x00FF00FF & *var) << 8);
  /* Swap each short and voila! You got it reversed! */
  *var = ((0xFFFF0000 & *var) >> 16) | ((0x0000FFFF & *var) << 16);
}
