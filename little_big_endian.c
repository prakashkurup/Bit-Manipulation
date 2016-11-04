/*
 * =====================================================================================
 *
 *       Filename:  little_big_endian.c
 *
 *    Description:  Little to Big Endian conversion.
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

void littleToBig(uint32_t *var)
{
  uint32_t set1 = (0xFF000000 & *var) >> 24;
  uint32_t set2 = (0x00FF0000 & *var) >> 8;
  uint32_t set3 = (0x0000FF00 & *var) << 8;
  uint32_t set4 = (0x000000FF & *var) << 24;

  *var = set1 | set2 | set3 | set4;
}
