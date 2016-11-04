/*
 * =====================================================================================
 *
 *       Filename:  nibble_swap.c
 *
 *    Description:  Nibble swap.
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

void nibbleSwap(uint32_t *var)
{
  *var = ((0xF0F0F0F0 & *var) >> 4) | ((0x0F0F0F0F & *var) << 4);
}
