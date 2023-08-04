#include <stdio.h>

/* copy input to output; 2nd version
 * Assignment is an expression. */

int main() {
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);

  return 0;
}
