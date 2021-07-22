//TODO!! ADD FAILURE TESTS FOR OUT OF BOUNDS
//TODO ALSO MAYBE CHANGE THESE TESTS TO TORTURE???
//
/* { dg-options "-march=rv32imc_xcorev1p0" } */
/* { dg-do run } */
#include <stdlib.h>

int dest[] = {-2147483648,   -30, 0, 3489, 2147483647};
int src1[] = {-2147483648,  -675, 0, 4358, 2147483647};
int src2[] = {-2147483648, -9694, 0,   45, 2147483647};

int
main(void)
{
  if (__builtin_corev_mac(dest[0], src1[0], src2[0]) != -2147483648) abort();
  if (__builtin_corev_mac(dest[0], src1[1], src2[3]) !=  2147453273) abort();
  if (__builtin_corev_mac(dest[0], src1[2], src2[4]) != -2147483648) abort();

  if (__builtin_corev_mac(dest[1], src1[1], src2[1]) !=    6543420) abort();
  if (__builtin_corev_mac(dest[1], src1[0], src2[3]) != 2147483618) abort();
  if (__builtin_corev_mac(dest[1], src1[2], src2[4]) !=        -30) abort();

  if (__builtin_corev_mac(dest[2], src1[2], src2[2]) !=           0) abort();
  if (__builtin_corev_mac(dest[2], src1[0], src2[3]) != -2147483648) abort();
  if (__builtin_corev_mac(dest[2], src1[1], src2[4]) != -2147482973) abort();

  if (__builtin_corev_mac(dest[3], src1[3], src2[3]) !=    199599) abort();
  if (__builtin_corev_mac(dest[3], src1[0], src2[2]) !=      3489) abort();
  if (__builtin_corev_mac(dest[3], src1[1], src2[4]) != -2147479484) abort();

  if (__builtin_corev_mac(dest[4], src1[4], src2[4]) != -2147483648) abort();
  if (__builtin_corev_mac(dest[4], src1[0], src2[2]) !=  2147483647) abort();
  if (__builtin_corev_mac(dest[4], src1[1], src2[3]) !=  2147453272) abort();

  return 0;
}
