/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int src1[] = {-2147483648, -484535, 0, 1962939230, 2147483647};
int src2[] = {-2147483648,   -9214, 0,    5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_mulu(src1[0], src2[0]) != 0) abort();
  if (__builtin_corev_mulu(src1[0], src2[1]) != 0) abort();
  if (__builtin_corev_mulu(src1[0], src2[4]) != 0) abort();
 
  if (__builtin_corev_mulu(src1[1], src2[1]) != -2055998830) abort();
  if (__builtin_corev_mulu(src1[1], src2[2]) !=           0) abort();
  if (__builtin_corev_mulu(src1[1], src2[3]) !=   400590981) abort();

  if (__builtin_corev_mulu(src1[2], src2[2]) != 0) abort();
  if (__builtin_corev_mulu(src1[2], src2[0]) != 0) abort();
  if (__builtin_corev_mulu(src1[2], src2[4]) != 0) abort();

  if (__builtin_corev_mulu(src1[3], src2[3]) !=  49961766) abort();
  if (__builtin_corev_mulu(src1[3], src2[2]) !=         0) abort();
  if (__builtin_corev_mulu(src1[3], src2[1]) != 279244476) abort();

  if (__builtin_corev_mulu(src1[4], src2[4]) !=    -131071) abort();
  if (__builtin_corev_mulu(src1[4], src2[1]) != -603905026) abort();
  if (__builtin_corev_mulu(src1[4], src2[3]) !=  660396195) abort();

  return 0;
}
