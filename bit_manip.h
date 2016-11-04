/*
 * =====================================================================================
 *
 *       Filename:  bit_manip.h
 *
 *    Description:  Header file for Bit-Manipulation.
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

#ifndef BIT_MANIP_H
#define BIT_MANIP_H

int countSetBits(uint32_t var);

int countSetBitsTable(uint32_t var);

int reverseBits(uint32_t *var);

int countFlippedBits(uint32_t a, uint32_t b);

int average(int a, int b);

void minMax(int a, int b);

int missingNumber(int *arr, int size);

int checkParity(uint32_t var);

void nibbleSwap(uint32_t *var);

void masking(int high, int low);

void littleToBig(uint32_t *var);



#endif /* BIT_MANIP_H */
