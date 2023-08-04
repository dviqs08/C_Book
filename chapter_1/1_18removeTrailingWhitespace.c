#include <stdio.h>

/* while (there is a line)
 *   if (there are blank spaces remove them)
 *     print it
 * to remove (
 *   find the newline and length
 *   count backwards, counting tabs and spaces
 *   while moving the newline back
 * unitl you hit a normal character
 * terminate the string, return the count*
 */

#define MAXLINE 1000

int getLine(char line[], int maxline);
int removeTrailing(char s[]);

int main() {
  char line[MAXLINE];

  while (getLine(line, MAXLINE) > 0)
    if (removeTrailing(line) > 0)
      printf("%s", line);
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
int removeTrailing(char s[]) {
  int i;

  i = 0;

  while (s[i] != '\n') // find newline
    ++i;
  --i; // one backwards
  while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
    --i;        // go backwards through whitespace
  if (i >= 0) { // is it a nonblank line?
    ++i;
    s[i] = '\n'; // put the newline char back
    ++i;
    s[i] = '\0'; // terminate the string
  }
  return i;
}
