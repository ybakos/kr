/*
  Name: 1.5.4 1-12
  Copyright: 2009
  Author: Yong Bakos
  Date: 03/10/09 08:10PM
  Description: page 20
*/
#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c, nl, nw, nc, state;
  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') ++nl;
    if (c == ' ' || c == '\t' || c == '\n') state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
    if (state) putchar(c);
    else putchar('\n');
  }
  printf("%d %d %d\n", nl, nw, nc);
  return 0;
}