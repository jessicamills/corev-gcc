/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int src1[] = {-2147483648, -484535, 0, 1962939230, 2147483647};
int src2[] = {-2147483648,   -9214, 0,    5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_mulhhu(src1[0], src2[0]) != 1073741824) abort();
  if (__builtin_corev_mulhhu(src1[0], src2[1]) != 2147450880) abort();
  if (__builtin_corev_mulhhu(src1[0], src2[4]) != 1073709056) abort();

  if (__builtin_corev_mulhhu(src1[1], src2[1]) != -589816) abort();
  if (__builtin_corev_mulhhu(src1[1], src2[2]) !=       0) abort();
  if (__builtin_corev_mulhhu(src1[1], src2[3]) != 5963048) abort();

  if (__builtin_corev_mulhhu(src1[2], src2[2]) != 0) abort();
  if (__builtin_corev_mulhhu(src1[2], src2[0]) != 0) abort();
  if (__builtin_corev_mulhhu(src1[2], src2[4]) != 0) abort();

  if (__builtin_corev_mulhhu(src1[3], src2[3]) !=    2725632) abort();
  if (__builtin_corev_mulhhu(src1[3], src2[2]) !=          0) abort();
  if (__builtin_corev_mulhhu(src1[3], src2[1]) != 1962904320) abort();

  if (__builtin_corev_mulhhu(src1[4], src2[4]) != 1073676289) abort();
  if (__builtin_corev_mulhhu(src1[4], src2[1]) != 2147385345) abort();
  if (__builtin_corev_mulhhu(src1[4], src2[3]) !=    2981797) abort();

  return 0;
}
