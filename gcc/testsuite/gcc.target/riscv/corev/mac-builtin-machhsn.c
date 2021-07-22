/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int dest[] = {-2147483648,     -30, 0,    3489, 2147483647};
int src1[] = {-2147483648, -484535, 0,    4958, 2147483647};
int src2[] = {-2147483648,   -9214, 0, 5973853, 2147483647};

int
main(void)
{
  if (__builtin_corev_machhsn(dest[0], src1[0], src2[0],  0) != -1073741824) abort();
  if (__builtin_corev_machhsn(dest[0], src1[3], src2[2], 13) !=     -262144) abort();
  if (__builtin_corev_machhsn(dest[0], src1[4], src2[1], 31) !=           0) abort();

  if (__builtin_corev_machhsn(dest[1], src1[1], src2[1],  1) !=    -11) abort();
  if (__builtin_corev_machhsn(dest[1], src1[0], src2[4], 15) != -32768) abort();
  if (__builtin_corev_machhsn(dest[1], src1[1], src2[3], 10) !=     -1) abort();

  if (__builtin_corev_machhsn(dest[2], src1[2], src2[2],  0) !=    0) abort();
  if (__builtin_corev_machhsn(dest[2], src1[0], src2[1],  3) != 4096) abort();
  if (__builtin_corev_machhsn(dest[2], src1[4], src2[3], 21) !=    1) abort();

  if (__builtin_corev_machhsn(dest[3], src1[3], src2[3], 27) !=  0) abort();
  if (__builtin_corev_machhsn(dest[3], src1[1], src2[2], 14) !=  0) abort();
  if (__builtin_corev_machhsn(dest[3], src1[2], src2[4],  7) != 27) abort();

  if (__builtin_corev_machhsn(dest[4], src1[4], src2[4], 31) !=         -1) abort();
  if (__builtin_corev_machhsn(dest[4], src1[3], src2[1],  0) != 2147483647) abort();
  if (__builtin_corev_machhsn(dest[4], src1[2], src2[0],  2) !=  536870911) abort();

  return 0;
}
