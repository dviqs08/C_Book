#include <stdio.h>

int brace, bracket, paren;

void search(int c);
void in_comment(void);
void in_quote(int c);

int main() {
  int c;
  int brace, brack, paren;

  while ((c = getchar()) != EOF) {
    if (c == '/') {
      if ((c = getchar()) == '*')
        in_comment();
      else
        search(c);
    } else if (c == '\'' || c == '"')
      in_quote(c);
    else
      search(c);

    if (brace < 0) {
      printf("Unbalanced braces\n");
      brace = 0;
    } else if (bracket < 0) {
      printf("Unbalanced brackets\n");
      bracket = 0;
    } else if (paren < 0) {
      printf("Unbalanced parentheses\n");
      paren = 0;
    }
  }
  if (brace > 0) {
    printf("Unbalanced braces\n");
  } else if (bracket > 0) {
    printf("Unbalanced brackets\n");
  } else if (paren > 0) {
    printf("Unbalanced parentheses\n");
  }

  return 0;
}

// search: search text for unmatched parens, brackets, and braces.
void search(int c) {
  int brace, bracket, paren;

  if (c == '{')
    ++brace;
  else if (c == '}')
    --brace;
  else if (c == '[')
    ++bracket;
  else if (c == ']')
    --bracket;
  else if (c == '(')
    ++paren;
  else if (c == ')')
    --paren;
}

void in_comment(void) {
  int c, d;
  c = getchar();
  d = getchar();

  while (c != '*' && d != '/') {
    c = d;
    d = getchar();
  }
}

void in_quote(int c) {
  int d;

  while ((d = getchar()) != c)
    if (d == '\\')
      getchar();
}
