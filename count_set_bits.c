/*
 * =====================================================================================
 *
 *       Filename:  count_set_bits.c
 *
 *    Description:  Count the set bits of an unsigned int.
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

/* Brian Kernighan's way */
int countSetBits(uint32_t var)
{
  int count = 0;
  while (var) {
    var &= (var - 1);
    count++;
  }

  return count;
}

/* Using lookup table */
int countSetBitsTable(uint32_t var)
{
  static uint8_t table[256] = {0};

  /* Generate the lookup table */
  int i;
  for (i = 0; i < 256; i++) {
    table[i] = (i & 1) + table[i / 2];
  }

  /* Character pointer to uint32_t var */
  uint8_t *pVar = (uint8_t *)&var;

  /* Using the lookup table, get number of set bits for each byte of var*/
  int count = table[pVar[0]] + table[pVar[1]] + table[pVar[2]] + table[pVar[3]];

  return count;
}
