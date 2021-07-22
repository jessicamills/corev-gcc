/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int dest[] = {-2147483648,     -30, 0,       3489, 2147483647};
int src1[] = {-2147483648, -484535, 0, 1962939230, 2147483647};
int src2[] = {-2147483648,   -9214, 0,    5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_macun(dest[0], src1[0], src2[0],  0) != -2147483648) abort();
  if (__builtin_corev_macun(dest[0], src1[3], src2[2], 16) !=       32768) abort();
  if (__builtin_corev_macun(dest[0], src1[4], src2[1], 31) !=           0) abort();

  if (__builtin_corev_macun(dest[1], src1[1], src2[1],  1) != 1119484218) abort();
  if (__builtin_corev_macun(dest[1], src1[0], src2[4], 14) !=     262143) abort();
  if (__builtin_corev_macun(dest[1], src1[1], src2[3], 10) !=     391202) abort();

  if (__builtin_corev_macun(dest[2], src1[2], src2[2],  0) !=  0) abort();
  if (__builtin_corev_macun(dest[2], src1[0], src2[1],  8) !=  0) abort();
  if (__builtin_corev_macun(dest[2], src1[4], src2[3], 23) != 78) abort();

  if (__builtin_corev_macun(dest[3], src1[3], src2[3],  5) != 1561414) abort();
  if (__builtin_corev_macun(dest[3], src1[1], src2[2], 17) !=       0) abort();
  if (__builtin_corev_macun(dest[3], src1[2], src2[4],  3) !=     436) abort();

  if (__builtin_corev_macun(dest[4], src1[4], src2[4], 31) !=           0) abort();
  if (__builtin_corev_macun(dest[4], src1[3], src2[1],  0) != -1868239173) abort();
  if (__builtin_corev_macun(dest[4], src1[2], src2[0],  5) !=    67108863) abort();

  return 0;
}
