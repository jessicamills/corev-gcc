/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int src1[] = {-2147483648, -484535, 0, 1962939230, 2147483647};
int src2[] = {-2147483648,   -9214, 0,    5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_mulhhurn(src1[0], src2[0],  0) != 1073741824) abort();
  if (__builtin_corev_mulhhurn(src1[0], src2[1], 13) !=     262140) abort();
  if (__builtin_corev_mulhhurn(src1[0], src2[4], 31) !=          0) abort();

  if (__builtin_corev_mulhhurn(src1[1], src2[1],  1) != 2147188740) abort();
  if (__builtin_corev_mulhhurn(src1[1], src2[2], 17) !=          0) abort();
  if (__builtin_corev_mulhhurn(src1[1], src2[3], 10) !=       5823) abort();

  if (__builtin_corev_mulhhurn(src1[2], src2[2],  0) != 0) abort();
  if (__builtin_corev_mulhhurn(src1[2], src2[0],  9) != 0) abort();
  if (__builtin_corev_mulhhurn(src1[2], src2[4], 23) != 0) abort();

  if (__builtin_corev_mulhhurn(src1[3], src2[3],  7) !=    21294) abort();
  if (__builtin_corev_mulhhurn(src1[3], src2[2], 17) !=        0) abort();
  if (__builtin_corev_mulhhurn(src1[3], src2[1],  6) != 30670380) abort();

  if (__builtin_corev_mulhhurn(src1[4], src2[4], 31) !=          0) abort();
  if (__builtin_corev_mulhhurn(src1[4], src2[1],  0) != 2147385345) abort();
  if (__builtin_corev_mulhhurn(src1[4], src2[3],  2) !=     745449) abort();

  return 0;
}
