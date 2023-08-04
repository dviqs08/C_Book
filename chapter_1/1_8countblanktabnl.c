#include <stdio.h>

int main() {
  int c, blanks, tabs, nls;

  c = 0;
  blanks = 0;
  tabs = 0;
  nls = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++blanks;
    else if (c == '\t')
      ++tabs;
    else if (c == '\n')
      ++nls;
  }

  printf("blanks: %d\n", blanks);
  printf("tabs: %d\n", tabs);
  printf("newlines %d\n", nls);
  return 0;
}
