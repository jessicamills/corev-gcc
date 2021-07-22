/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int src1[] = {-2147483648, -484535, 0,    4958, 2147483647};
int src2[] = {-2147483648,   -9214, 0, 5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_mulhhsn(src1[0], src2[0],  0) != 1073741824) abort();
  if (__builtin_corev_mulhhsn(src1[0], src2[1],  5) !=       1024) abort();
  if (__builtin_corev_mulhhsn(src1[0], src2[4], 15) !=     -32767) abort();
 
  if (__builtin_corev_mulhhsn(src1[1], src2[1], 1) !=  4) abort();
  if (__builtin_corev_mulhhsn(src1[1], src2[2], 6) !=  0) abort();
  if (__builtin_corev_mulhhsn(src1[1], src2[3], 7) != -6) abort();

  if (__builtin_corev_mulhhsn(src1[2], src2[2], 27) != 0) abort();
  if (__builtin_corev_mulhhsn(src1[2], src2[0],  5) != 0) abort();
  if (__builtin_corev_mulhhsn(src1[2], src2[4], 29) != 0) abort();

  if (__builtin_corev_mulhhsn(src1[3], src2[3], 31) != 0) abort();
  if (__builtin_corev_mulhhsn(src1[3], src2[2],  0) != 0) abort();
  if (__builtin_corev_mulhhsn(src1[3], src2[1],  5) != 0) abort();

  if (__builtin_corev_mulhhsn(src1[4], src2[4], 31) !=     0) abort();
  if (__builtin_corev_mulhhsn(src1[4], src2[1], 21) !=    -1) abort();
  if (__builtin_corev_mulhhsn(src1[4], src2[3],  6) != 46590) abort();

  return 0;
}
