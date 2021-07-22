/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int src1[] = {-2147483648, -484535,  0,    4958, 2147483647};
int src2[] = {-2147483648,   -9214,  0, 5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_mulsn(src1[0], src2[0],  0) != 0) abort();
  if (__builtin_corev_mulsn(src1[0], src2[1], 13) != 0) abort();
  if (__builtin_corev_mulsn(src1[0], src2[4], 31) != 0) abort();
 
  if (__builtin_corev_mulsn(src1[1], src2[1],  1) != 118782281) abort();
  if (__builtin_corev_mulsn(src1[1], src2[2], 17) !=         0) abort();
  if (__builtin_corev_mulsn(src1[1], src2[3], 10) !=   -253726) abort();

  if (__builtin_corev_mulsn(src1[2], src2[2],  0) != 0) abort();
  if (__builtin_corev_mulsn(src1[2], src2[0],  9) != 0) abort();
  if (__builtin_corev_mulsn(src1[2], src2[4], 23) != 0) abort();

  if (__builtin_corev_mulsn(src1[3], src2[3],  7) !=  390326) abort();
  if (__builtin_corev_mulsn(src1[3], src2[2], 14) !=       0) abort();
  if (__builtin_corev_mulsn(src1[3], src2[1],  6) != -713798) abort();

  if (__builtin_corev_mulsn(src1[4], src2[4], 31) !=     0) abort();
  if (__builtin_corev_mulsn(src1[4], src2[1],  0) !=  9214) abort();
  if (__builtin_corev_mulsn(src1[4], src2[3],  2) != -2520) abort();

  return 0;
}
