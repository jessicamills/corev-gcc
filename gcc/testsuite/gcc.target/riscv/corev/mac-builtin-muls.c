/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int src1[] = {-2147483648, -484535, 0,    4958, 2147483647};
int src2[] = {-2147483648,   -9214, 0, 5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_muls(src1[0], src2[0]) != 0) abort();
  if (__builtin_corev_muls(src1[0], src2[1]) != 0) abort();
  if (__builtin_corev_muls(src1[0], src2[4]) != 0) abort();
 
  if (__builtin_corev_muls(src1[1], src2[1]) !=  237564562) abort();
  if (__builtin_corev_muls(src1[1], src2[2]) !=          0) abort();
  if (__builtin_corev_muls(src1[1], src2[3]) != -259815291) abort();

  if (__builtin_corev_muls(src1[2], src2[2]) != 0) abort();
  if (__builtin_corev_muls(src1[2], src2[0]) != 0) abort();
  if (__builtin_corev_muls(src1[2], src2[4]) != 0) abort();

  if (__builtin_corev_muls(src1[3], src2[3]) !=  49961766) abort();
  if (__builtin_corev_muls(src1[3], src2[2]) !=         0) abort();
  if (__builtin_corev_muls(src1[3], src2[1]) != -45683012) abort();

  if (__builtin_corev_muls(src1[4], src2[4]) !=      1) abort();
  if (__builtin_corev_muls(src1[4], src2[1]) !=   9214) abort();
  if (__builtin_corev_muls(src1[4], src2[3]) != -10077) abort();

  return 0;
}
