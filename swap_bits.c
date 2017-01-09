/*
 * =====================================================================================
 *
 *       Filename:  swap_bits.c
 *
 *    Description:  Swap bits of an unsigned int at two given positions with number of bits.
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

#define F32BIT 0xFFFFFFFF
#define MASK(high, low) ((F32BIT >> (31 - (high))) & (F32BIT << (low)))

void swapBits(uint32_t *var, int pos1, int pos2, int num)
{
  if (pos1 == pos2)
    return;

  int high, low;
  if (pos1 > pos2) {
    high = pos1;
    low = pos2;
  } else {
    high = pos2;
    low = pos1;
  }

  /* Counting the bits from the position so do this */
  num = num - 1;

  /* Extract the bits at high position */
  uint32_t maskHigh = MASK(high + num, high);
  uint32_t setHigh = *var & maskHigh;
  /* Right Shift the bits to position of 'low' bits */
  setHigh >>= high - low;

  /* Extract the bits at low position */
  uint32_t maskLow = MASK(low + num, low);
  uint32_t setLow = *var & maskLow;
  /* Left Shift the bits to position of 'high' bits */
  setLow <<= high - low;

  /* Combine the two */
  uint32_t set = setHigh | setLow;

  /* Reset the bits of var at both high and low positions */
  *var &= ~MASK(high + num, high);
  *var &= ~MASK(low + num, low);

  /* Plugin the set bits with var */
  *var |= set;
}
