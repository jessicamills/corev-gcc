/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int src1[] = {-2147483648, -484535, 0,    4958, 2147483647};
int src2[] = {-2147483648,   -9214, 0, 5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_mulhhsrn(src1[0], src2[0],  0) != 1073741824) abort();
  if (__builtin_corev_mulhhsrn(src1[0], src2[1], 13) !=          4) abort();
  if (__builtin_corev_mulhhsrn(src1[0], src2[4], 31) !=          0) abort();

  if (__builtin_corev_mulhhsrn(src1[1], src2[1],  1) !=  4) abort();
  if (__builtin_corev_mulhhsrn(src1[1], src2[2], 17) !=  0) abort();
  if (__builtin_corev_mulhhsrn(src1[1], src2[3], 10) != -1) abort();

  if (__builtin_corev_mulhhsrn(src1[2], src2[2],  0) != 0) abort();
  if (__builtin_corev_mulhhsrn(src1[2], src2[0],  9) != 0) abort();
  if (__builtin_corev_mulhhsrn(src1[2], src2[4], 23) != 0) abort();

  if (__builtin_corev_mulhhsrn(src1[3], src2[3],  7) != 0) abort();
  if (__builtin_corev_mulhhsrn(src1[3], src2[2], 17) != 0) abort();
  if (__builtin_corev_mulhhsrn(src1[3], src2[1],  6) != 0) abort();

  if (__builtin_corev_mulhhsrn(src1[4], src2[4], 31) !=      0) abort();
  if (__builtin_corev_mulhhsrn(src1[4], src2[1],  0) != -32767) abort();
  if (__builtin_corev_mulhhsrn(src1[4], src2[3],  2) != 745449) abort();

  return 0;
}
