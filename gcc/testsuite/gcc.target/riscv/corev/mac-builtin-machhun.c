/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int dest[] = {-2147483648,     -30, 0,       3489, 2147483647};
int src1[] = {-2147483648, -484535, 0, 1962939230, 2147483647};
int src2[] = {-2147483648,   -9214, 0,    5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_machhun(dest[0], src1[0], src2[0],  0) != -1073741824) abort();
  if (__builtin_corev_machhun(dest[0], src1[3], src2[2], 16) !=       32768) abort();
  if (__builtin_corev_machhun(dest[0], src1[4], src2[1], 31) !=           1) abort();

  if (__builtin_corev_machhun(dest[1], src1[1], src2[1],  1) != 2147188725) abort();
  if (__builtin_corev_machhun(dest[1], src1[0], src2[4], 13) !=     131067) abort();
  if (__builtin_corev_machhun(dest[1], src1[1], src2[3],  9) !=      11646) abort();

  if (__builtin_corev_machhun(dest[2], src1[2], src2[2],  0) !=       0) abort();
  if (__builtin_corev_machhun(dest[2], src1[0], src2[1],  8) != 8388480) abort();
  if (__builtin_corev_machhun(dest[2], src1[4], src2[3], 24) !=       0) abort();

  if (__builtin_corev_machhun(dest[3], src1[3], src2[3],  4) != 170570) abort();
  if (__builtin_corev_machhun(dest[3], src1[1], src2[2], 14) !=      0) abort();
  if (__builtin_corev_machhun(dest[3], src1[2], src2[4],  3) !=    436) abort();

  if (__builtin_corev_machhun(dest[4], src1[4], src2[4], 31) !=          1) abort();
  if (__builtin_corev_machhun(dest[4], src1[3], src2[1],  0) != -184579329) abort();
  if (__builtin_corev_machhun(dest[4], src1[2], src2[0],  3) !=  268435455) abort();

  return 0;
}

