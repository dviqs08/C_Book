#include <stdio.h>

int main() {
  int c, lastc;

  c = 0;
  lastc = 0;

  while ((c = getchar()) != EOF) {
    if (c != ' ')
      putchar(c);
    if (c == ' ')
      if (lastc != ' ')
        putchar(c);

    lastc = c;
  }
  return 0;
}
