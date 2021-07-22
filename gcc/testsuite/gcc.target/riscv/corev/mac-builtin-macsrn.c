/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int dest[] = {-2147483648,     -30, 0,    3489, 2147483647};
int src1[] = {-2147483648, -484535, 0,    4958, 2147483647};
int src2[] = {-2147483648,   -9214, 0, 5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_macsrn(dest[0], src1[0], src2[0],  0) != -2147483648) abort();
  if (__builtin_corev_macsrn(dest[0], src1[3], src2[2], 13) !=     -262144) abort();
  if (__builtin_corev_macsrn(dest[0], src1[4], src2[1], 31) !=          -1) abort();

  if (__builtin_corev_macsrn(dest[1], src1[1], src2[1],  1) != 118782266) abort();
  if (__builtin_corev_macsrn(dest[1], src1[0], src2[4], 17) !=         0) abort();
  if (__builtin_corev_macsrn(dest[1], src1[1], src2[3], 10) !=   -253726) abort();

  if (__builtin_corev_macsrn(dest[2], src1[2], src2[2],  0) != 0) abort();
  if (__builtin_corev_macsrn(dest[2], src1[0], src2[1],  9) != 0) abort();
  if (__builtin_corev_macsrn(dest[2], src1[4], src2[3], 23) != 0) abort();

  if (__builtin_corev_macsrn(dest[3], src1[3], src2[3],  7) != 390354) abort();
  if (__builtin_corev_macsrn(dest[3], src1[1], src2[2], 17) !=      0) abort();
  if (__builtin_corev_macsrn(dest[3], src1[2], src2[4],  6) !=     55) abort();

  if (__builtin_corev_macsrn(dest[4], src1[4], src2[4], 31) !=         -1) abort();
  if (__builtin_corev_macsrn(dest[4], src1[3], src2[1],  0) != 2101800635) abort();
  if (__builtin_corev_macsrn(dest[4], src1[2], src2[0],  2) != -536870912) abort();

  return 0;
}
