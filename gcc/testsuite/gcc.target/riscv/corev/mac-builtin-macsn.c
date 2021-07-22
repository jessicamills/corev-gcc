/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int dest[] = {-2147483648,     -30, 0,    3489, 2147483647};
int src1[] = {-2147483648, -484535, 0,    4958, 2147483647};
int src2[] = {-2147483648,   -9214, 0, 5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_macsn(dest[0], src1[0], src2[0],  0) != -2147483648) abort();
  if (__builtin_corev_macsn(dest[0], src1[3], src2[2], 16) !=      -32768) abort();
  if (__builtin_corev_macsn(dest[0], src1[4], src2[1], 31) !=          -1) abort();
 
  if (__builtin_corev_macsn(dest[1], src1[1], src2[1],  1) != 118782266) abort();
  if (__builtin_corev_macsn(dest[1], src1[0], src2[4], 16) !=        -1) abort();
  if (__builtin_corev_macsn(dest[1], src1[1], src2[3], 10) !=   -253726) abort();

  if (__builtin_corev_macsn(dest[2], src1[2], src2[2],  0) !=  0) abort();
  if (__builtin_corev_macsn(dest[2], src1[0], src2[1],  8) !=  0) abort();
  if (__builtin_corev_macsn(dest[2], src1[4], src2[3], 24) != -1) abort();

  if (__builtin_corev_macsn(dest[3], src1[3], src2[3],  4) != 3122828) abort();
  if (__builtin_corev_macsn(dest[3], src1[1], src2[2], 16) !=       0) abort();
  if (__builtin_corev_macsn(dest[3], src1[2], src2[4],  6) !=      54) abort();

  if (__builtin_corev_macsn(dest[4], src1[4], src2[4], 31) !=         -1) abort();
  if (__builtin_corev_macsn(dest[4], src1[3], src2[1],  0) != 2101800635) abort();
  if (__builtin_corev_macsn(dest[4], src1[2], src2[0],  3) !=  268435455) abort();

  return 0;
}
