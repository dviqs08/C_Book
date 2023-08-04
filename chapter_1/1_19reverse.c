#include <inttypes.h>
#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);
void reverseLine(char s[]);

int main() {
  char line[MAXLINE];

  while (getLine(line, MAXLINE) > 0) {
    reverseLine(line);
    printf("%s", line);
  }
  return 0;
}

int getLine(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void reverseLine(char s[]) {
  int i, j;
  char temp;

  i = 0;
  while (s[i] != '\0')
    ++i;
  --i;
  if (s[i] == '\n')
    --i;
  j = 0;
  while (j < i) {
    temp = s[j];
    s[j] = s[i];
    s[i] = temp;
    --i;
    ++j;
  }
}
