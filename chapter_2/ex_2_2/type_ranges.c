#include <limits.h>
#include <stdio.h>

int main() {

  printf("##### CHAR #####\n");
  printf("bits: %d\n", CHAR_BIT);
  printf("Signed char min: %d\n", SCHAR_MIN);
  printf("Signed char max: %d\n", SCHAR_MAX);
  printf("Unsigned char max: %d\n", UCHAR_MAX);
  printf("Char min: %d\n", CHAR_MIN);
  printf("Char max: %d\n", CHAR_MAX);

  printf("##### SHORT #####\n");
  printf("Signed short int min: %hi\n", SHRT_MIN);
  printf("Signed short int max: %hi\n", SHRT_MAX);
  printf("Unsigned short int max: %hu\n", USHRT_MAX);

  printf("##### INT #####\n");
  printf("Signed int min: %i\n", INT_MIN);
  printf("Signed int max: %i\n", INT_MAX);
  printf("Unsigned int max: %u\n", UINT_MAX);

  printf("##### LONG #####\n");
  printf("Signed long min: %ld\n", LONG_MIN);
  printf("Signed long max: %ld\n", LONG_MAX);
  printf("Unsigned long max: %lu\n", ULONG_MAX);
  return 0;
}
