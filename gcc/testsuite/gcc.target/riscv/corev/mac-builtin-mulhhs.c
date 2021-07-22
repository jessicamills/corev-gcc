/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int src1[] = {-2147483648, -484535, 0,    4958, 2147483647};
int src2[] = {-2147483648,   -9214, 0, 5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_mulhhs(src1[0], src2[0]) !=  1073741824) abort();
  if (__builtin_corev_mulhhs(src1[0], src2[1]) !=       32768) abort();
  if (__builtin_corev_mulhhs(src1[0], src2[4]) != -1073709056) abort();
 
  if (__builtin_corev_mulhhs(src1[1], src2[1]) !=    8) abort();
  if (__builtin_corev_mulhhs(src1[1], src2[2]) !=    0) abort();
  if (__builtin_corev_mulhhs(src1[1], src2[3]) != -728) abort();

  if (__builtin_corev_mulhhs(src1[2], src2[2]) != 0) abort();
  if (__builtin_corev_mulhhs(src1[2], src2[0]) != 0) abort();
  if (__builtin_corev_mulhhs(src1[2], src2[4]) != 0) abort();

  if (__builtin_corev_mulhhs(src1[3], src2[3]) != 0) abort();
  if (__builtin_corev_mulhhs(src1[3], src2[2]) != 0) abort();
  if (__builtin_corev_mulhhs(src1[3], src2[1]) != 0) abort();

  if (__builtin_corev_mulhhs(src1[4], src2[4]) != 1073676289) abort();
  if (__builtin_corev_mulhhs(src1[4], src2[1]) !=     -32767) abort();
  if (__builtin_corev_mulhhs(src1[4], src2[3]) !=    2981797) abort();

  return 0;
}
