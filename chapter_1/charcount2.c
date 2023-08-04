#include <stdio.h>

/* count characters in input; 2nd version
 * using a double precision float and for loop */

int main() {
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ; // null statement
  printf("%.0f\n", nc);

  return 0;
}
