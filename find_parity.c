/*
 * =====================================================================================
 *
 *       Filename:  find_parity.c
 *
 *    Description:  Check parity; whether the number of set bits of a number is odd or even.
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
#include <stdbool.h>

int checkParity(uint32_t var)
{
  bool Parity = false;

  while (var) {
    var &= (var - 1);
    Parity = !Parity;
  }

  return Parity;
}
