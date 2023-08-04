#include <stdio.h>

/* count characters in input; 1st version */

int main() {
  long nc; // at least 32 bits

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);

  return 0;
}
