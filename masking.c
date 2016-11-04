/*
 * =====================================================================================
 *
 *       Filename:  replace_bits.c
 *
 *    Description:  Replace bits of a number at a given range.
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

void masking(int high, int low)
{
  uint32_t mask = (0xFFFFFFFF >> (31 - high)) & (0xFFFFFFFF << low);
}
