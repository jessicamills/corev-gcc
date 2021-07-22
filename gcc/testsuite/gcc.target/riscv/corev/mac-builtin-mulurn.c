/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int src1[] = {-2147483648, -484535, 0, 1962939230, 2147483647};
int src2[] = {-2147483648,   -9214, 0,    5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_mulurn(src1[0], src2[0],  0) != 0) abort();
  if (__builtin_corev_mulurn(src1[0], src2[1], 13) != 0) abort();
  if (__builtin_corev_mulurn(src1[0], src2[4], 31) != 0) abort();
 
  if (__builtin_corev_mulurn(src1[1], src2[1],  1) != 1119484233) abort();
  if (__builtin_corev_mulurn(src1[1], src2[2], 17) !=          0) abort();
  if (__builtin_corev_mulurn(src1[1], src2[3], 10) !=     391202) abort();

  if (__builtin_corev_mulurn(src1[2], src2[2],  0) != 0) abort();
  if (__builtin_corev_mulurn(src1[2], src2[0],  9) != 0) abort();
  if (__builtin_corev_mulurn(src1[2], src2[4], 23) != 0) abort();

  if (__builtin_corev_mulurn(src1[3], src2[3],  7) !=  390326) abort();
  if (__builtin_corev_mulurn(src1[3], src2[2], 17) !=       0) abort();
  if (__builtin_corev_mulurn(src1[3], src2[1],  6) != 4363195) abort();

  if (__builtin_corev_mulurn(src1[4], src2[4], 31) !=          0) abort();
  if (__builtin_corev_mulurn(src1[4], src2[1],  0) != -603905026) abort();
  if (__builtin_corev_mulurn(src1[4], src2[3],  2) !=  165099049) abort();

  return 0;
}
